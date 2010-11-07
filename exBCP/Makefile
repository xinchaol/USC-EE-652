COMPONENT=BcpCollectionExampleAppC
APPSDIR=$(TOSROOT)/apps
TOSDIR=$(TOSROOT)/tos
CFLAGS += -I$(TOSDIR)/lib/net -I$(TOSDIR)/lib/net/4bitle -I$(TOSDIR)/lib/net/bcp \
	-I$(TOSDIR)/lib/net/ctp -I$(TOSDIR)/lib/ftsp

CFLAGS +="-DCC2420_DEF_CHANNEL=26"
CFLAGS +="-DCC2420_DEF_RFPOWER=5"
CFLAGS +="-DCC2420_NO_ADDRESS_RECOGNITION"
CFLAGS +="-DTOS_FOOTER_LEN=0"
CFLAGS +="-DVIRTQ"
CFLAGS +="-DLIFO"
#CFLAGS +="-DLOW_POWER_LISTENING"
CFLAGS +="-DLPL_SLEEP_INTERVAL_MS=1000"
CFLAGS +="-DMEAN_ADMIT_TIME=666"

C_CODE = ./c

BUILD_EXTRA_DEPS =  $(C_CODE)/UartPacket.h

$(C_CODE)/UartPacket.h:BcpCollectionExample.h
	mig c -target=$(PLATFORM) $(CFLAGS) -c-prefix=UartPacket BcpCollectionExample.h UartPacket -o $@

include $(MAKERULES)
