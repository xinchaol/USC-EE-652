#! /usr/bin/python
from TOSSIM import *
import sys

t = Tossim([])
r = t.radio()
f = open("15-15-tight-mica2-grid.txt", "r")
out = open("ratecontroller-output.txt", "w")

lines = f.readlines()
for line in lines:
  s = line.split()
  if (len(s) > 0):
    if (s[0] == "gain"):
      #print " ", s[0], " ", s[1], " ", s[2], " ", s[3];
      r.add(int(s[1]), int(s[2]), float(s[3]))

#t.addChannel("RadioCountToLedsC", sys.stdout)
#t.addChannel("Boot", sys.stdout)
t.addChannel("RateControl", out)
#t.addChannel("Forwarder", sys.stdout)
#t.addChannel("RateControl_Error", sys.stdout)
#t.addChannel("Source", sys.stdout)
#t.addChannel("ERROR", sys.stdout)
#t.addChannel("Root", sys.stdout)
#t.addChannel("TotalDelay", sys.stdout)
#t.addChannel("Receive", sys.stdout)

noise = open("meyer-heavy.txt", "r")
lines = noise.readlines()
for line in lines:
  str1 = line.strip()
  if (str1 != ""):
    val = int(str1)
    for i in range(1, 4):
      t.getNode(i).addNoiseTraceReading(val)

for i in range(1, 4):
  print "Creating noise model for ",i;
  t.getNode(i).createNoiseModel()

#for i in range(1, 100):
#  t.getNode(i).bootAtTime()
t.getNode(1).bootAtTime(100001);
t.getNode(2).bootAtTime(800008);
t.getNode(3).bootAtTime(1800009);

for i in range(0, 1000000):
  t.runNextEvent()
