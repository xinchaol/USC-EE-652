#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 149 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef int ptrdiff_t;
#line 211
typedef unsigned int size_t;
#line 323
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 37 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__ 
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__ 
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__ 
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__ 
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__ 
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__ 
typedef unsigned long long int uint_fast64_t;
#line 126
typedef int intptr_t;


typedef unsigned int uintptr_t;








__extension__ 
typedef long long int intmax_t;
__extension__ 
typedef unsigned long long int uintmax_t;
# 35 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 292
#line 288
typedef struct __nesc_unnamed4242 {

  long long int quot;
  long long int rem;
} imaxdiv_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 257
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 385
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 44 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, 
const void *__restrict __src, size_t __n) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 65
extern void *memset(void *__s, int __c, size_t __n) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 128
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 143
extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 40 "/usr/include/xlocale.h" 3
#line 28
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 262 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 399
extern size_t strlen(const char *__s) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 67 "/usr/include/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4243 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4244 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 72 "/usr/include/stdlib.h" 3
#line 68
typedef union __nesc_unnamed4245 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 102
#line 98
typedef struct __nesc_unnamed4246 {

  int quot;
  int rem;
} div_t;







#line 106
typedef struct __nesc_unnamed4247 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 118
typedef struct __nesc_unnamed4248 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 158
__extension__ 
#line 195
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 31 "/usr/include/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ 
#line 47
typedef signed long long int __int64_t;
__extension__ 
#line 48
typedef unsigned long long int __uint64_t;







__extension__ 
#line 56
typedef long long int __quad_t;
__extension__ 
#line 57
typedef unsigned long long int __u_quad_t;
#line 134
__extension__ 
#line 134
typedef __u_quad_t __dev_t;
__extension__ 
#line 135
typedef unsigned int __uid_t;
__extension__ 
#line 136
typedef unsigned int __gid_t;
__extension__ 
#line 137
typedef unsigned long int __ino_t;
__extension__ 
#line 138
typedef __u_quad_t __ino64_t;
__extension__ 
#line 139
typedef unsigned int __mode_t;
__extension__ 
#line 140
typedef unsigned int __nlink_t;
__extension__ 
#line 141
typedef long int __off_t;
__extension__ 
#line 142
typedef __quad_t __off64_t;
__extension__ 
#line 143
typedef int __pid_t;
__extension__ 
#line 144
typedef struct __nesc_unnamed4249 {
#line 144
  int __val[2];
} 
#line 144
__fsid_t;
__extension__ 
#line 145
typedef long int __clock_t;
__extension__ 
#line 146
typedef unsigned long int __rlim_t;
__extension__ 
#line 147
typedef __u_quad_t __rlim64_t;
__extension__ 
#line 148
typedef unsigned int __id_t;
__extension__ 
#line 149
typedef long int __time_t;
__extension__ 
#line 150
typedef unsigned int __useconds_t;
__extension__ 
#line 151
typedef long int __suseconds_t;

__extension__ 
#line 153
typedef int __daddr_t;
__extension__ 
#line 154
typedef long int __swblk_t;
__extension__ 
#line 155
typedef int __key_t;


__extension__ 
#line 158
typedef int __clockid_t;


__extension__ 
#line 161
typedef void *__timer_t;


__extension__ 
#line 164
typedef long int __blksize_t;




__extension__ 
#line 169
typedef long int __blkcnt_t;
__extension__ 
#line 170
typedef __quad_t __blkcnt64_t;


__extension__ 
#line 173
typedef unsigned long int __fsblkcnt_t;
__extension__ 
#line 174
typedef __u_quad_t __fsblkcnt64_t;


__extension__ 
#line 177
typedef unsigned long int __fsfilcnt_t;
__extension__ 
#line 178
typedef __u_quad_t __fsfilcnt64_t;

__extension__ 
#line 180
typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ 
#line 189
typedef int __intptr_t;


__extension__ 
#line 192
typedef unsigned int __socklen_t;
# 34 "/usr/include/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 61
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 99
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 60 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 76
typedef __time_t time_t;
#line 92
typedef __clockid_t clockid_t;
#line 104
typedef __timer_t timer_t;
# 151 "/usr/include/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 201
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 24 "/usr/include/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 29
typedef struct __nesc_unnamed4250 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 38 "/usr/include/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  long int tv_nsec;
};
# 75 "/usr/include/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 49 "/usr/include/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 78
#line 67
typedef struct __nesc_unnamed4251 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 30 "/usr/include/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 229 "/usr/include/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 50 "/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;






#line 53
typedef union __nesc_unnamed4252 {

  char __size[36];
  long int __align;
} pthread_attr_t;
#line 70
#line 67
typedef struct __pthread_internal_slist {

  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
#line 104
#line 76
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;





    unsigned int __nusers;
    __extension__ union  {

      int __spins;
      __pthread_slist_t __list;
    } ;
  } 
  __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;





#line 106
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 130
#line 115
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 132
typedef union __nesc_unnamed4257 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 189
#line 150
typedef union __nesc_unnamed4258 {
#line 170
  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;





#line 191
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 206
typedef union __nesc_unnamed4261 {

  char __size[20];
  long int __align;
} pthread_barrier_t;





#line 212
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 349 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 418
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 471
extern void *malloc(size_t __size) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 488
extern void free(void *__ptr) __attribute((__nothrow__)) ;
#line 742
typedef int (*__compar_fn_t)(const void *arg_0x40338438, const void *arg_0x403385d0);
#line 776
__extension__ 
#line 793
__extension__ 
# 38 "/usr/include/bits/mathdef.h" 3
typedef long double float_t;

typedef long double double_t;
# 110 "/usr/include/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__nothrow__)) ;
#line 154
extern double pow(double __x, double __y) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__nothrow__)) ;
#line 182
extern double fabs(double __x) __attribute((__nothrow__)) __attribute((const)) ;


extern double floor(double __x) __attribute((__nothrow__)) __attribute((const)) ;
#line 251
extern double erfc(double arg_0x40382320) __attribute((__nothrow__)) ;
# 202 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN, 

  FP_INFINITE, 

  FP_ZERO, 

  FP_SUBNORMAL, 

  FP_NORMAL
};
#line 302
#line 295
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 320
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 48 "/usr/include/ctype.h" 3
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 65
typedef struct _IO_FILE __FILE;
# 95 "/usr/include/wchar.h" 3
#line 83
typedef struct __nesc_unnamed4266 {

  int __count;
  union __nesc_unnamed4267 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 26 "/usr/include/_G_config.h" 3
#line 22
typedef struct __nesc_unnamed4268 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 27
typedef struct __nesc_unnamed4269 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#line 53
typedef int _G_int16_t __attribute((__mode__(__HI__))) ;
typedef int _G_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int _G_uint16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int _G_uint32_t __attribute((__mode__(__SI__))) ;
# 40 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 170
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 206
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 271
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 364
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 80 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 111
typedef _G_fpos_t fpos_t;
#line 165
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 239
extern int fflush(FILE *__stream);
#line 303
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__nothrow__)) ;
#line 353
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 383
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 851
extern int fileno(FILE *__stream) __attribute((__nothrow__)) ;
# 57 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4270 {
#line 68
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);

bool sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel);
uint8_t sim_mote_get_radio_channel(int mote);
# 57 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 90
struct __nesc_attr_atleastonce {
};
#line 91
struct __nesc_attr_exactlyonce {
};
# 9 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x404d7010), 
int (*key_eq_fn)(void *arg_0x404d7458, void *arg_0x404d75d0));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4271 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 43
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 48
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4272 {
  SIM_LOG_OUTPUT_COUNT = 355U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 76
static void fillInOutput(int id, char *name);
#line 151
static inline void sim_log_init();
#line 164
static inline void sim_log_add_channel(char *name, FILE *file);
#line 204
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 226
static void sim_log_commit_change();
#line 238
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 253
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 268
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 298
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 54 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/heap.h"
#line 50
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 47 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 51
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 103
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 119
static inline void expand_heap(heap_t *heap);
#line 133
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 147
static void swap(node_t *first, node_t *second);
#line 160
static void down_heap(heap_t *heap, int findex);
#line 186
static void up_heap(heap_t *heap, int findex);
# 36 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 57 "/usr/include/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 93
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4273 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 56
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 76
#line 65
typedef struct sim_noise_node_t {

  char *key[16];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal[16];
  uint32_t noiseGenTime[16];
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint8_t channel, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 72
void sim_end()   ;





int sim_random()   ;
#line 94
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 148
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 171
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 91 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 36 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_gain.h"
#line 45
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
# 233 "/usr/include/time.h"
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x40600010, int arg_0x40600168);
static double RandomUniform(void );
# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 80
void sim_noise_create_model(uint16_t node_id)   ;
#line 99
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 115
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 198
void sim_noise_dist(uint16_t node_id)   ;
#line 251
void arrangeKey(uint16_t node_id, uint8_t channel)   ;










void makePmfDistr(uint16_t node_id)   ;
#line 290
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id, uint8_t channel)   ;
#line 372
char sim_noise_generate(uint16_t node_id, uint8_t channel, uint32_t cur_t)   ;
#line 428
void makeNoiseModel(uint16_t node_id)   ;
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 51
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);

void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn);
uint8_t sim_packet_dsn(sim_packet_t *msg);
# 6 "/home/xinchaol/local/src/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4274 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4275 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 13 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_uint8_t dsn;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 15
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;
#line 29
#line 19
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t lqi;
  nx_uint8_t ack;
  nx_uint16_t time;
  nx_uint8_t destroyable;
} __attribute__((packed)) 



tossim_metadata_t;
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4276 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4277 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4278 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 125
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 44 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/platform_message.h"
#line 41
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 46
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 50
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/home/xinchaol/local/src/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;




void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn)   ;




uint8_t sim_packet_dsn(sim_packet_t *msg)   ;
# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4279 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 4 "BcpCollectionExample.h"
enum __nesc_unnamed4280 {
  UART_QUEUE_SIZE = 20, 
  AM_UARTPACKET = 0x89
};
#line 28
#line 17
typedef nx_struct UartPacket {
  nx_uint32_t time;
  nx_uint32_t field1;
  nx_uint32_t field2;
  nx_uint32_t field3;
  nx_uint16_t field4;
  nx_uint16_t field5;
  nx_uint16_t field6;
  nx_uint8_t field7;
  nx_uint8_t field8;
  nx_uint8_t type;
} __attribute__((packed)) UartPacket;
# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/ftsp/TimeSyncMsg.h"
#line 29
typedef nx_struct TimeSyncMsg {

  nx_uint16_t rootID;
  nx_uint16_t nodeID;
  nx_uint8_t seqNum;





  nx_uint32_t globalTime;


  nx_uint32_t localTime;
} __attribute__((packed)) TimeSyncMsg;

enum __nesc_unnamed4281 {
  AM_TIMESYNCMSG = 0x3E, 
  TIMESYNCMSG_LEN = sizeof(TimeSyncMsg ) - sizeof(nx_uint32_t ), 
  TS_TIMER_MODE = 0, 
  TS_USER_MODE = 1
};
# 32 "/home/xinchaol/local/src/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4282 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 29 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4283 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4284 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4285 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 25 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4286 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4287 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 79
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 91
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 100
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 114
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4288 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 34 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4289 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4290 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4291 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4292 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4293 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4294 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4295 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4296 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4297 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4298 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4299 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 48 "/home/xinchaol/local/src/tinyos-2.x/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4300 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 33 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 38 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 7 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_lqi.h"
#line 4
typedef struct lqi_dist {
  uint8_t lqi;
  double cdf;
} lqi_dist_t;





#line 9
typedef struct snr_lqi {
  double snr;
  uint8_t numLqi;
  lqi_dist_t *lqi;
} snr_lqi_t;

lqi_dist_t snr24[8] = { { 108, 49.5481927711 }, { 102, 49.9397590361 }, { 103, 50.9036144578 }, { 101, 51.0542168675 }, { 106, 63.7951807229 }, { 107, 92.3192771084 }, { 104, 94.2168674699 }, { 105, 100.0 } };
lqi_dist_t snr25[10] = { { 98, 0.0320204931156 }, { 108, 48.9593339737 }, { 102, 49.1514569324 }, { 103, 49.8879282741 }, { 100, 49.9199487672 }, { 101, 49.9839897534 }, { 106, 64.3932116555 }, { 107, 93.5638808838 }, { 104, 95.58117195 }, { 105, 100.0 } };
lqi_dist_t snr26[8] = { { 108, 49.9569583931 }, { 102, 50.3586800574 }, { 103, 51.1047345768 }, { 101, 51.1334289813 }, { 106, 63.6441893831 }, { 107, 93.68723099 }, { 104, 95.4662840746 }, { 105, 100.0 } };
lqi_dist_t snr27[9] = { { 108, 51.0854243022 }, { 102, 51.2545813363 }, { 103, 51.7056667606 }, { 100, 51.7338595997 }, { 101, 51.7620524387 }, { 106, 64.223287285 }, { 107, 94.051310967 }, { 104, 96.1093882154 }, { 105, 100.0 } };
lqi_dist_t snr20[10] = { { 99, 0.0332667997339 }, { 108, 37.9906852961 }, { 102, 38.5562208916 }, { 103, 40.0864936793 }, { 100, 40.119760479 }, { 101, 40.252827678 }, { 106, 56.3872255489 }, { 107, 89.5542248836 }, { 104, 92.7811044578 }, { 105, 100.0 } };
lqi_dist_t snr21[9] = { { 108, 40.3826787513 }, { 102, 40.953340047 }, { 103, 41.9268210809 }, { 100, 42.061094327 }, { 101, 42.2289358845 }, { 106, 58.4424303458 }, { 107, 89.7616649883 }, { 104, 92.2457200403 }, { 105, 100.0 } };
lqi_dist_t snr22[9] = { { 108, 44.0018966335 }, { 102, 44.4760550024 }, { 103, 45.4243717402 }, { 100, 45.4717875771 }, { 101, 45.6377430062 }, { 106, 60.6685633001 }, { 107, 90.9198672357 }, { 104, 93.6699857752 }, { 105, 100.0 } };
lqi_dist_t snr23[9] = { { 108, 46.3674104826 }, { 102, 46.8085106383 }, { 103, 47.6647638817 }, { 100, 47.7166580176 }, { 101, 47.8204462896 }, { 106, 61.6761805916 }, { 107, 91.64504411 }, { 104, 93.8764919564 }, { 105, 100.0 } };
lqi_dist_t snr28[8] = { { 108, 51.1636636637 }, { 102, 51.4264264264 }, { 103, 51.9144144144 }, { 100, 52.027027027 }, { 106, 64.3393393393 }, { 107, 94.3318318318 }, { 104, 96.2837837838 }, { 105, 100.0 } };
lqi_dist_t snr29[8] = { { 108, 53.434225844 }, { 102, 53.7834691502 }, { 103, 54.4819557625 }, { 101, 54.5401629802 }, { 106, 65.9487776484 }, { 107, 94.3538998836 }, { 104, 95.983701979 }, { 105, 100.0 } };
lqi_dist_t snr0[25] = { { 82, 7.20720720721 }, { 63, 8.10810810811 }, { 64, 10.8108108108 }, { 66, 12.6126126126 }, { 69, 16.2162162162 }, { 68, 19.8198198198 }, { 83, 24.3243243243 }, { 80, 28.8288288288 }, { 81, 34.2342342342 }, { 86, 36.9369369369 }, { 87, 37.8378378378 }, { 84, 40.5405405405 }, { 85, 42.3423423423 }, { 77, 50.4504504505 }, { 76, 60.3603603604 }, { 75, 65.7657657658 }, { 74, 72.0720720721 }, { 73, 74.7747747748 }, { 72, 78.3783783784 }, { 71, 81.0810810811 }, { 70, 81.981981982 }, { 92, 82.8828828829 }, { 79, 90.990990991 }, { 78, 99.0990990991 }, { 52, 100.0 } };
lqi_dist_t snr3[45] = { { 62, 0.0711743772242 }, { 67, 0.391459074733 }, { 60, 0.462633451957 }, { 102, 0.569395017794 }, { 88, 5.62277580071 }, { 89, 10.3558718861 }, { 64, 10.5693950178 }, { 65, 10.7473309609 }, { 66, 10.9964412811 }, { 69, 11.5658362989 }, { 82, 17.0818505338 }, { 83, 22.8825622776 }, { 80, 27.7224199288 }, { 81, 32.4555160142 }, { 86, 37.9003558719 }, { 87, 42.9893238434 }, { 84, 47.9359430605 }, { 85, 53.4163701068 }, { 92, 56.6903914591 }, { 79, 60.7117437722 }, { 104, 60.7473309609 }, { 78, 64.9822064057 }, { 68, 65.6583629893 }, { 99, 66.4412811388 }, { 98, 67.0462633452 }, { 75, 70.0 }, { 74, 71.6370106762 }, { 73, 73.5231316726 }, { 72, 75.0177935943 }, { 71, 76.2989323843 }, { 70, 76.975088968 }, { 91, 80.462633452 }, { 90, 84.2348754448 }, { 100, 84.590747331 }, { 101, 84.6619217082 }, { 95, 86.1209964413 }, { 94, 88.3629893238 }, { 97, 89.3950177936 }, { 96, 90.8540925267 }, { 77, 94.590747331 }, { 59, 94.6263345196 }, { 76, 97.3309608541 }, { 61, 97.4021352313 }, { 93, 99.8932384342 }, { 63, 100.0 } };
lqi_dist_t snr2[42] = { { 67, 1.42984807864 }, { 60, 1.51921358356 }, { 68, 2.32350312779 }, { 88, 4.7363717605 }, { 89, 7.14924039321 }, { 64, 7.86416443253 }, { 65, 8.57908847185 }, { 66, 9.29401251117 }, { 69, 12.0643431635 }, { 82, 18.1411974978 }, { 83, 24.3967828418 }, { 80, 29.2225201072 }, { 81, 33.8695263628 }, { 93, 34.763181412 }, { 87, 38.1590705987 }, { 84, 43.4316353887 }, { 85, 48.436103664 }, { 86, 51.8319928508 }, { 97, 51.9213583557 }, { 96, 52.2788203753 }, { 77, 58.3556747096 }, { 76, 64.164432529 }, { 75, 67.7390527256 }, { 74, 72.3860589812 }, { 73, 75.6032171582 }, { 72, 78.4629133155 }, { 71, 81.8588025022 }, { 70, 83.6461126005 }, { 91, 84.8078641644 }, { 90, 86.6845397676 }, { 100, 86.7739052726 }, { 92, 88.2037533512 }, { 95, 88.5612153709 }, { 94, 88.7399463807 }, { 79, 93.3869526363 }, { 78, 98.927613941 }, { 59, 99.0169794459 }, { 98, 99.1063449508 }, { 56, 99.1957104558 }, { 61, 99.4638069705 }, { 62, 99.7319034853 }, { 63, 100.0 } };
lqi_dist_t snr5[46] = { { 67, 0.153468385513 }, { 102, 1.01289134438 }, { 88, 6.1387354205 }, { 89, 11.6942909761 }, { 64, 11.9091467158 }, { 65, 11.9398403929 }, { 66, 11.97053407 }, { 103, 12.5230202578 }, { 100, 14.4260282382 }, { 83, 18.3241252302 }, { 80, 20.9023941068 }, { 81, 23.6955187231 }, { 86, 28.2688766114 }, { 87, 32.9957028852 }, { 84, 36.4333947207 }, { 85, 40.730509515 }, { 101, 41.9582565991 }, { 63, 42.0196439533 }, { 79, 44.1375076734 }, { 106, 44.1682013505 }, { 82, 47.0841006753 }, { 104, 47.3910374463 }, { 96, 51.6574585635 }, { 68, 51.9950890117 }, { 78, 53.8060159607 }, { 99, 56.0773480663 }, { 98, 59.4536525476 }, { 75, 60.8041743401 }, { 74, 61.4487415592 }, { 73, 61.97053407 }, { 72, 62.6764886433 }, { 71, 63.2903621854 }, { 70, 63.5972989564 }, { 91, 68.9993861265 }, { 90, 74.6777163904 }, { 93, 79.8956414979 }, { 92, 85.8809085328 }, { 95, 90.0859422959 }, { 94, 94.2909760589 }, { 97, 97.6672805402 }, { 105, 97.7593615715 }, { 77, 98.9257213014 }, { 76, 99.7851442603 }, { 56, 99.8158379374 }, { 61, 99.8465316145 }, { 69, 100.0 } };
lqi_dist_t snr7[45] = { { 67, 0.0192012288786 }, { 102, 5.04992319508 }, { 88, 8.25652841782 }, { 89, 12.1927803379 }, { 64, 12.2119815668 }, { 65, 12.2311827957 }, { 66, 12.2503840246 }, { 103, 16.9162826421 }, { 100, 22.1966205837 }, { 83, 24.3855606759 }, { 80, 25.5184331797 }, { 81, 27.1505376344 }, { 86, 30.222734255 }, { 87, 33.2373271889 }, { 84, 35.4070660522 }, { 85, 37.6920122888 }, { 101, 43.1643625192 }, { 63, 43.1835637481 }, { 79, 44.2396313364 }, { 106, 44.8732718894 }, { 82, 46.1789554531 }, { 107, 46.2749615975 }, { 104, 49.5007680492 }, { 105, 51.3248847926 }, { 78, 52.380952381 }, { 99, 57.2196620584 }, { 98, 62.1543778802 }, { 75, 62.5 }, { 74, 62.7112135177 }, { 73, 62.9992319508 }, { 72, 63.2680491551 }, { 71, 63.3448540707 }, { 70, 63.4792626728 }, { 91, 67.7995391705 }, { 90, 72.1006144393 }, { 93, 76.3056835637 }, { 92, 80.2995391705 }, { 95, 84.8502304147 }, { 94, 89.1321044547 }, { 97, 93.9132104455 }, { 96, 98.732718894 }, { 77, 99.366359447 }, { 59, 99.3855606759 }, { 76, 99.9615975422 }, { 69, 100.0 } };
lqi_dist_t snr6[45] = { { 67, 0.128238009746 }, { 102, 3.35983585535 }, { 88, 6.82226211849 }, { 89, 10.0538599641 }, { 64, 10.1820979738 }, { 65, 10.3103359836 }, { 66, 10.4642215953 }, { 103, 12.8238009746 }, { 82, 15.1064375481 }, { 83, 17.5173121313 }, { 80, 19.4152346756 }, { 81, 21.9286996666 }, { 86, 24.4934598615 }, { 93, 28.5714285714 }, { 84, 30.7771223391 }, { 85, 33.7778917671 }, { 101, 37.4967940498 }, { 79, 39.2151833804 }, { 95, 44.3959989741 }, { 87, 46.8325211593 }, { 104, 47.986663247 }, { 105, 48.473967684 }, { 68, 48.6535008977 }, { 78, 50.2436522185 }, { 99, 55.5270582201 }, { 98, 60.2462169787 }, { 75, 61.2977686586 }, { 74, 62.144139523 }, { 73, 62.9905103873 }, { 72, 63.8112336497 }, { 71, 64.2472428828 }, { 70, 64.4780713003 }, { 91, 68.0430879713 }, { 90, 71.5055142344 }, { 100, 76.6093870223 }, { 92, 80.3795845088 }, { 106, 80.4821749166 }, { 94, 85.4321620928 }, { 97, 91.5106437548 }, { 96, 96.9222877661 }, { 77, 98.2816106694 }, { 76, 99.6665811747 }, { 61, 99.7178763786 }, { 62, 99.7435239805 }, { 69, 100.0 } };
lqi_dist_t snr8[34] = { { 102, 6.99633699634 }, { 88, 9.06593406593 }, { 89, 11.0073260073 }, { 103, 17.9304029304 }, { 82, 18.2783882784 }, { 83, 18.7912087912 }, { 80, 19.0476190476 }, { 81, 19.2857142857 }, { 86, 20.3663003663 }, { 87, 22.0146520147 }, { 84, 22.7106227106 }, { 85, 23.6813186813 }, { 101, 31.0805860806 }, { 79, 31.1721611722 }, { 106, 33.0769230769 }, { 107, 33.2967032967 }, { 104, 39.1941391941 }, { 105, 43.3882783883 }, { 78, 43.4615384615 }, { 100, 50.293040293 }, { 99, 57.2527472527 }, { 98, 64.0842490842 }, { 75, 64.1208791209 }, { 74, 64.1391941392 }, { 91, 67.3626373626 }, { 90, 70.4761904762 }, { 93, 74.4505494505 }, { 92, 77.9120879121 }, { 95, 83.4249084249 }, { 94, 88.3882783883 }, { 97, 94.1025641026 }, { 96, 99.8901098901 }, { 77, 99.9816849817 }, { 76, 100.0 } };
lqi_dist_t snr11[20] = { { 91, 0.0598444045482 }, { 92, 0.179533213645 }, { 108, 0.239377618193 }, { 95, 0.957510472771 }, { 93, 1.25673249551 }, { 94, 1.7354877319 }, { 99, 6.40335128665 }, { 98, 8.73728306403 }, { 96, 9.99401555955 }, { 97, 11.6696588869 }, { 88, 11.7295032914 }, { 90, 11.7594254937 }, { 102, 24.7755834829 }, { 103, 40.9634949132 }, { 100, 47.0676241771 }, { 101, 55.5954518253 }, { 106, 65.4398563734 }, { 107, 67.9533213645 }, { 104, 84.5302214243 }, { 105, 100.0 } };
lqi_dist_t snr10[26] = { { 102, 10.8441850022 }, { 88, 11.2258643916 }, { 89, 11.5401885945 }, { 103, 23.3497979344 }, { 100, 32.8244274809 }, { 83, 32.8693309385 }, { 86, 32.9591378536 }, { 87, 33.2734620566 }, { 84, 33.3857207005 }, { 85, 33.4979793444 }, { 101, 43.578805568 }, { 79, 43.6012572968 }, { 106, 47.4854063763 }, { 107, 48.1814099686 }, { 104, 57.7009429726 }, { 105, 65.626403233 }, { 99, 74.5172878312 }, { 98, 81.2079030085 }, { 91, 81.9712617872 }, { 90, 82.5774584643 }, { 93, 84.1041760216 }, { 92, 85.4737314773 }, { 95, 88.6394252357 }, { 94, 90.7498877414 }, { 97, 96.273013022 }, { 96, 100.0 } };
lqi_dist_t snr13[13] = { { 96, 0.0612745098039 }, { 99, 0.816993464052 }, { 98, 1.14379084967 }, { 108, 2.51225490196 }, { 97, 2.61437908497 }, { 102, 7.96568627451 }, { 103, 16.5645424837 }, { 100, 17.7696078431 }, { 101, 20.1593137255 }, { 106, 45.5882352941 }, { 107, 63.8684640523 }, { 104, 78.8807189542 }, { 105, 100.0 } };
lqi_dist_t snr12[16] = { { 108, 0.241911097672 }, { 95, 0.423344420925 }, { 93, 0.483822195343 }, { 94, 0.514061082552 }, { 99, 1.96552766858 }, { 98, 2.6912609616 }, { 96, 2.81221651043 }, { 97, 3.26579981857 }, { 102, 10.9767160568 }, { 103, 23.4351375869 }, { 100, 26.0659207741 }, { 101, 30.9948593892 }, { 106, 51.1944360448 }, { 107, 60.5080133051 }, { 104, 78.7420622921 }, { 105, 100.0 } };
lqi_dist_t snr15[11] = { { 99, 0.064116264159 }, { 98, 0.085488352212 }, { 108, 6.79632400085 }, { 102, 8.20688181235 }, { 103, 11.8615088694 }, { 100, 12.2462064544 }, { 101, 12.9728574482 }, { 106, 39.0468048728 }, { 107, 75.1870057705 }, { 104, 83.1160504381 }, { 105, 100.0 } };
lqi_dist_t snr14[14] = { { 96, 0.0368935620734 }, { 93, 0.0553403431101 }, { 99, 0.239808153477 }, { 98, 0.442722744881 }, { 108, 3.37576092972 }, { 97, 3.41265449179 }, { 102, 6.32724589559 }, { 103, 12.543811105 }, { 100, 13.3185759085 }, { 101, 14.7389780483 }, { 106, 41.8926397344 }, { 107, 69.9501936912 }, { 104, 81.0367090943 }, { 105, 100.0 } };
lqi_dist_t snr17[11] = { { 99, 0.0569962952408 }, { 98, 0.071245369051 }, { 108, 24.5654032488 }, { 102, 25.2208606441 }, { 103, 27.0732402394 }, { 100, 27.2014819037 }, { 101, 27.6004559704 }, { 106, 47.976631519 }, { 107, 87.1900826446 }, { 104, 91.1655742377 }, { 105, 100.0 } };
lqi_dist_t snr16[11] = { { 99, 0.0779271381259 }, { 98, 0.116890707189 }, { 108, 15.0983830119 }, { 102, 16.0335086694 }, { 103, 18.9362945646 }, { 100, 19.0726670563 }, { 101, 19.4038573933 }, { 106, 41.3987921294 }, { 107, 81.9793493084 }, { 104, 87.6680303916 }, { 105, 100.0 } };
lqi_dist_t snr19[10] = { { 99, 0.0210039907582 }, { 108, 35.1816845201 }, { 102, 35.622768326 }, { 103, 37.0930476791 }, { 100, 37.1560596513 }, { 101, 37.3871035497 }, { 106, 53.8542323041 }, { 107, 88.615837009 }, { 104, 91.8504515858 }, { 105, 100.0 } };
lqi_dist_t snr18[11] = { { 99, 0.0137080191912 }, { 98, 0.0274160383825 }, { 108, 30.4043865661 }, { 102, 31.1583276217 }, { 103, 32.7484578478 }, { 100, 32.8169979438 }, { 101, 32.9403701165 }, { 106, 50.6374228924 }, { 107, 88.2933516107 }, { 104, 91.8026045236 }, { 105, 100.0 } };
lqi_dist_t snr31[3] = { { 108, 52.9411764706 }, { 106, 70.5882352941 }, { 107, 100.0 } };
lqi_dist_t snr30[7] = { { 108, 55.9880239521 }, { 103, 56.4371257485 }, { 101, 56.5868263473 }, { 106, 69.6107784431 }, { 107, 94.4610778443 }, { 104, 96.2574850299 }, { 105, 100.0 } };

snr_lqi_t allSnr[29] = { { 24, 8, snr24 }, { 25, 10, snr25 }, { 26, 8, snr26 }, { 27, 9, snr27 }, { 20, 10, snr20 }, { 21, 9, snr21 }, { 22, 9, snr22 }, { 23, 9, snr23 }, { 28, 8, snr28 }, { 29, 8, snr29 }, { 0, 25, snr0 }, { 3, 45, snr3 }, { 2, 42, snr2 }, { 5, 46, snr5 }, { 7, 45, snr7 }, { 6, 45, snr6 }, { 8, 34, snr8 }, { 11, 20, snr11 }, { 10, 26, snr10 }, { 13, 13, snr13 }, { 12, 16, snr12 }, { 15, 11, snr15 }, { 14, 14, snr14 }, { 17, 11, snr17 }, { 16, 11, snr16 }, { 19, 10, snr19 }, { 18, 11, snr18 }, { 31, 3, snr31 }, { 30, 7, snr30 } };
uint8_t allSnr_len = 29;
# 5 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_lqi.c"
static uint8_t bi_search(lqi_dist_t *lqi, uint8_t low_i, uint8_t high_i, uint8_t coin);
#line 19
uint8_t sim_lqi_generate(double SNR)   ;
# 12 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/Bcp.h"
enum __nesc_unnamed4301 {
  PKT_NORMAL = 1, 
  PKT_NULL = 2
};







enum __nesc_unnamed4302 {
  BEACON_TIME = 5000, 
  FAST_BEACON_TIME = 35, 
  LOG_UPDATE_TIME = 1000, 
  REROUTE_TIME = 50, 
  MAX_RETX_ATTEMPTS = 5, 
  ROUTING_TABLE_SIZE = 0x30, 
  FORWARDING_QUEUE_SIZE = 12, 
  SNOOP_QUEUE_SIZE = 0x5, 
  MAX_FWD_DLY = 40, 
  FWD_DLY_PKT_COUNT = 20, 
  LINK_EST_ALPHA = 9, 
  LINK_LOSS_ALPHA = 90, 
  LINK_LOSS_V = 2, 
  PER_HOP_MAC_DLY = 10, 


  CONGESTION_COUNT = 12, 
  CONGEST_HOP_TX = 3, 
  AD_CONTROL_TRIG = 4
};

enum __nesc_unnamed4303 {

  AM_BCP_BEACON = 0x90, 
  AM_BCP_DATA = 0x91, 
  AM_BCP_DELAY = 0x92
};
#line 71
#line 55
typedef nx_struct __nesc_unnamed4304 {
  nx_uint32_t bcpDelay;
  nx_uint16_t bcpBackpressure;
  nx_uint16_t nhBackpressure;
  nx_uint16_t txCount;
  nx_uint16_t hdrChecksum;
  nx_am_addr_t origin;
  nx_uint8_t hopCount;
  nx_uint8_t originSeqNo;
  nx_uint8_t pktType;
  nx_uint8_t nodeTxCount;
  nx_am_addr_t burstNotifyAddr;

  nx_uint8_t valphaValue;
  nx_uint8_t valphaSeqNo;
  nx_uint8_t valphaUpper;
} __attribute__((packed)) bcp_data_header_t;
#line 83
#line 76
typedef nx_struct __nesc_unnamed4305 {
  nx_uint16_t bcpBackpressure;

  nx_uint8_t valphaUpper;
  nx_uint8_t valphaSeqNo;
} __attribute__((packed)) 

bcp_beacon_header_t;









#line 88
typedef nx_struct __nesc_unnamed4306 {
  nx_uint32_t bcpTransferDelay;
  nx_uint32_t bcpBackpressure;
  nx_uint8_t delaySeqNo;
  nx_uint8_t avgHopCount;
} __attribute__((packed)) bcp_delay_header_t;





enum __nesc_unnamed4307 {
  LOCAL_SEND = 0x1, 
  FORWARD = 0x2
};
#line 119
#line 111
typedef struct __nesc_unnamed4308 {
  uint32_t bcpArrivalDelay;
  uint32_t arrivalTime;
  uint32_t firstTxTime;
  uint32_t lastTxTime;
  uint8_t source;
  message_t * msg;
  uint8_t txCount;
} fe_queue_entry_t;
#line 133
#line 125
typedef struct __nesc_unnamed4309 {
  uint16_t backpressure;
  uint16_t linkPacketTxTime;
  uint16_t linkETX;
  uint8_t lastTxNoStreakID;
  uint8_t txNoStreakCount;
  am_addr_t neighbor;
  bool isBurstyNow;
} routing_table_entry;
#line 145
#line 140
typedef struct __nesc_unnamed4310 {
  am_addr_t neighbor;
  am_addr_t origin;
  uint8_t originSeqNo;
  uint8_t hopCount;
} latestForwarded_table_entry;
# 31 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/ctp/Collection.h"
enum __nesc_unnamed4311 {
  AM_COLLECTION_DATA = 20, 
  AM_COLLECTION_CONTROL = 21, 
  AM_COLLECTION_DEBUG = 22
};

typedef uint8_t collection_id_t;
typedef nx_uint8_t nx_collection_id_t;
# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4312 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4313 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4314 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4315 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4316 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4317 {

  uint8_t flat;
  struct __nesc_unnamed4318 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4319 {

  uint8_t flat;
  struct __nesc_unnamed4320 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4321 {

  uint8_t flat;
  struct __nesc_unnamed4322 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4323 {

  uint8_t flat;
  struct __nesc_unnamed4324 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4325 {

  uint8_t flat;
  struct __nesc_unnamed4326 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4327 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4328 {

  uint8_t flat;
  struct __nesc_unnamed4329 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4330 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4331 {

  uint8_t flat;
  struct __nesc_unnamed4332 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4333 {

  uint8_t flat;
  struct __nesc_unnamed4334 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4335 {

  uint8_t flat;
  struct __nesc_unnamed4336 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4337 {

  uint8_t flat;
  struct __nesc_unnamed4338 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
typedef TMilli BcpCollectionExampleC__sinkTimer__precision_tag;
typedef TMilli BcpCollectionExampleC__Timer__precision_tag;
typedef uint16_t CpmModelC__ReadRssi__val_t;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef message_t BcpForwardingEngineP__SnoopPool__t;
typedef TMilli BcpForwardingEngineP__txRetryTimer__precision_tag;
typedef message_t *BcpForwardingEngineP__SnoopQueue__t;
typedef fe_queue_entry_t *BcpForwardingEngineP__SendStack__t;
typedef TMilli BcpForwardingEngineP__BeaconTimer__precision_tag;
typedef uint16_t BcpForwardingEngineP__getBackpressure__val_t;
typedef TMilli BcpForwardingEngineP__DelayPacketTimer__precision_tag;
typedef fe_queue_entry_t BcpForwardingEngineP__QEntryPool__t;
typedef message_t BcpForwardingEngineP__MessagePool__t;
typedef TMilli BcpRoutingEngineP__BlacklistTimer__precision_tag;
typedef message_t /*BcpC.MessagePoolP*/PoolC__0__pool_t;
typedef /*BcpC.MessagePoolP*/PoolC__0__pool_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__pool_t;
typedef /*BcpC.MessagePoolP.PoolP*/PoolP__0__pool_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__t;
typedef fe_queue_entry_t /*BcpC.QEntryPoolP*/PoolC__1__pool_t;
typedef /*BcpC.QEntryPoolP*/PoolC__1__pool_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool_t;
typedef /*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__t;
typedef message_t /*BcpC.SnoopPoolP*/PoolC__2__pool_t;
typedef /*BcpC.SnoopPoolP*/PoolC__2__pool_t /*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool_t;
typedef /*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool_t /*BcpC.SnoopPoolP.PoolP*/PoolP__2__Pool__t;
typedef fe_queue_entry_t */*BcpC.SendStack*/StackC__0__stack_t;
typedef /*BcpC.SendStack*/StackC__0__stack_t /*BcpC.SendStack*/StackC__0__Stack__t;
typedef message_t */*BcpC.SnoopQueue*/QueueC__0__queue_t;
typedef /*BcpC.SnoopQueue*/QueueC__0__queue_t /*BcpC.SnoopQueue*/QueueC__0__Queue__t;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Timer0__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum AMQueueP____nesc_unnamed4339 {
  AMQueueP__NUM_CLIENTS = 2U
};
typedef message_t BcpRateControllerP__modPool__t;
typedef uint16_t BcpRateControllerP__getBackpressure__val_t;
typedef TMilli BcpRateControllerP__admissionTimer__precision_tag;
typedef message_t *BcpRateControllerP__modQueue__t;
typedef uint32_t BcpRateControllerP__setMean__val_t;
typedef uint32_t /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__setMean__val_t;
typedef message_t /*BcpRateControllerC.modPool*/PoolC__3__pool_t;
typedef /*BcpRateControllerC.modPool*/PoolC__3__pool_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool_t;
typedef /*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__t;
typedef message_t */*BcpRateControllerC.modQueue*/QueueC__1__queue_t;
typedef /*BcpRateControllerC.modQueue*/QueueC__1__queue_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__t;
typedef uint32_t /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__setMean__val_t;
typedef message_t *SafeSerialSendM__SendQueue__t;
typedef message_t SafeSerialSendM__MessagePool__t;
typedef message_t */*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue_t;
typedef /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__t;
typedef message_t /*BcpCollectionExampleAppC.SafeSerialSend.PoolC*/PoolC__4__pool_t;
typedef /*BcpCollectionExampleAppC.SafeSerialSend.PoolC*/PoolC__4__pool_t /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool_t;
typedef /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool_t /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Pool__t;
# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Boot.nc"
static void BcpCollectionExampleC__Boot__booted(void );
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BcpCollectionExampleC__sinkTimer__fired(void );
# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void BcpCollectionExampleC__RadioControl__startDone(error_t error);
#line 117
static void BcpCollectionExampleC__RadioControl__stopDone(error_t error);
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void BcpCollectionExampleC__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 6 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
static void BcpCollectionExampleC__BcpDebugIF__reportBackpressure(uint32_t dataQueueSize_p, uint32_t virtualQueueSize_p, uint16_t localTXCount_p, uint8_t origin_p, uint8_t originSeqNo_p, uint8_t reportSource_p);




static void BcpCollectionExampleC__BcpDebugIF__reportError(uint8_t type_p);




static void BcpCollectionExampleC__BcpDebugIF__reportLinkRate(uint8_t neighbor_p, uint16_t previousLinkPacketTxTime_p, 
uint16_t updateLinkPacketTxTime_p, uint16_t newLinkPacketTxTime, 
uint16_t latestLinkPacktLossEst);




static void BcpCollectionExampleC__BcpDebugIF__reportValues(uint32_t field1_p, uint32_t field2_p, uint32_t field3_p, uint16_t field4_p, 
uint16_t field5_p, uint16_t field6_p, uint8_t field7_p, uint8_t field8_p);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



BcpCollectionExampleC__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BcpCollectionExampleC__Timer__fired(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 51
static error_t MotePlatformP__SubInit__default__init(void );
#line 51
static error_t MotePlatformP__PlatformInit__init(void );
# 32 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );


static bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );


static bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 29
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 30
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(
# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x406b1650);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__default__runTask(
# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x406b1650);
# 46 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP__Scheduler__init(void );







static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
# 36 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMote.nc"
static void SimMoteP__SimMote__setEuid(long long int euid);


static int SimMoteP__SimMote__getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP__SimMote__turnOff(void );
#line 40
static void SimMoteP__SimMote__turnOn(void );
#line 35
static long long int SimMoteP__SimMote__getEuid(void );







static error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel);
#line 38
static bool SimMoteP__SimMote__isOn(void );





static uint8_t SimMoteP__SimMote__getRadioChannel(void );
#line 37
static long long int SimMoteP__SimMote__getStartTime(void );
# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t CC2420CsmaP__SplitControl__start(void );
# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420CsmaP__CC2420Config__syncDone(error_t error);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t CC2420CsmaP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 77 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static void CC2420CsmaP__Model__receive(message_t *msg);
#line 68
static void CC2420CsmaP__Model__sendDone(message_t *msg, error_t error);










static bool CC2420CsmaP__Model__shouldAck(message_t *msg);
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 50 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );
#line 66
static void LedsP__Leds__led1Off(void );
#line 83
static void LedsP__Leds__led2Off(void );
#line 45
static void LedsP__Leds__led0On(void );
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void TossimActiveMessageP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TossimActiveMessageP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void TossimActiveMessageP__SendNotifier__default__aboutToSend(
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
am_id_t arg_0x409991d0, 
# 59 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageP__AMSend__send(
# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
am_id_t arg_0x40985a88, 
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

TossimActiveMessageP__AMSend__getPayload(
# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
am_id_t arg_0x40985a88, 
# 121 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t TossimActiveMessageP__AMSend__maxPayloadLength(
# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
am_id_t arg_0x40985a88);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TossimActiveMessageP__Snoop__default__receive(
# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
am_id_t arg_0x4097ab00, 
# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageP__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


TossimActiveMessageP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t TossimActiveMessageP__Packet__maxPayloadLength(void );
#line 83
static void TossimActiveMessageP__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TossimActiveMessageP__Receive__default__receive(
# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
am_id_t arg_0x4097a468, 
# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 77 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t TossimActiveMessageP__AMPacket__source(
#line 73
message_t * amsg);
#line 57
static am_addr_t TossimActiveMessageP__AMPacket__address(void );









static am_addr_t TossimActiveMessageP__AMPacket__destination(
#line 63
message_t * amsg);
#line 92
static void TossimActiveMessageP__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 136
static am_id_t TossimActiveMessageP__AMPacket__type(
#line 132
message_t * amsg);
#line 151
static void TossimActiveMessageP__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
#line 125
static bool TossimActiveMessageP__AMPacket__isForMe(
#line 122
message_t * amsg);
# 110 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void CC2420ControlP__syncDoneTask__runTask(void );
#line 64
static void CpmModelC__read_rssi_task__runTask(void );
# 63 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Read.nc"
static void CpmModelC__ReadRssi__default__readDone(error_t result, CpmModelC__ReadRssi__val_t val);
# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC__Model__putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC__Model__clearChannel(void );
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__stopDoneTask__runTask(void );
# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC__Packet__send(int node, message_t *msg, uint8_t len);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__sendDoneTask__runTask(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t TossimPacketModelC__Init__init(void );
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__startDoneTask__runTask(void );
# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC__Control__start(void );
# 48 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t TossimPacketModelC__PacketAcknowledgements__requestAck(
#line 42
message_t * msg);
#line 74
static bool TossimPacketModelC__PacketAcknowledgements__wasAcked(
#line 69
message_t * msg);
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC__GainRadioModel__receive(message_t *msg);
#line 50
static void TossimPacketModelC__GainRadioModel__acked(message_t *msg);

static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg);
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/sim/CC2420PacketBody.nc"
static tossim_header_t *CC2420PacketP__CC2420PacketBody__getHeader(message_t *msg);
# 46 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void UniqueSendP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
#line 64
static error_t UniqueSendP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueSendP__Init__init(void );
#line 51
static error_t StateImplP__Init__init(void );
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40b249f8);
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x40b249f8, 
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/State.nc"
uint8_t reqState);
# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 35
static uint32_t RandomMlcgC__Random__rand32(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t UniqueReceiveP__Init__init(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__DuplicateReceive__default__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
#line 67
static 
#line 63
message_t * 



BcpForwardingEngineP__SubReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void BcpForwardingEngineP__SubSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t BcpForwardingEngineP__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


BcpForwardingEngineP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t BcpForwardingEngineP__Packet__maxPayloadLength(void );
#line 83
static void BcpForwardingEngineP__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t BcpForwardingEngineP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t BcpForwardingEngineP__Send__maxPayloadLength(void );
# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void BcpForwardingEngineP__RadioControl__startDone(error_t error);
#line 117
static void BcpForwardingEngineP__RadioControl__stopDone(error_t error);
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t BcpForwardingEngineP__Init__init(void );
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BcpForwardingEngineP__txRetryTimer__fired(void );
# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void BcpForwardingEngineP__BeaconSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void BcpForwardingEngineP__sendBeaconTask__runTask(void );
#line 64
static void BcpForwardingEngineP__sendDataTask__runTask(void );
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BcpForwardingEngineP__BeaconTimer__fired(void );
# 58 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpPacket.nc"
static uint8_t BcpForwardingEngineP__BcpPacket__getHopCount(message_t *msg);
static uint8_t BcpForwardingEngineP__BcpPacket__getBCPPktType(message_t *msg);
#line 44
static void BcpForwardingEngineP__BcpPacket__setOrigin(message_t *msg, am_addr_t addr);
#line 43
static am_addr_t BcpForwardingEngineP__BcpPacket__getOrigin(message_t *msg);






static uint32_t BcpForwardingEngineP__BcpPacket__getDelay(message_t *msg);
#line 45
static uint8_t BcpForwardingEngineP__BcpPacket__getSequenceNumber(message_t *msg);





static uint16_t BcpForwardingEngineP__BcpPacket__getTxCount(message_t *msg);
# 55 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Get.nc"
static BcpForwardingEngineP__getBackpressure__val_t BcpForwardingEngineP__getBackpressure__get(void );
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BcpForwardingEngineP__DelayPacketTimer__fired(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



BcpForwardingEngineP__BeaconReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t BcpForwardingEngineP__StdControl__start(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



BcpForwardingEngineP__SubSnoop__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 24 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
static void BcpForwardingEngineP__RouterForwarderIF__setNotifyBurstyLinkNeighbor(am_addr_t neighbor_p);
#line 17
static void BcpForwardingEngineP__RouterForwarderIF__setNextHopAddress(am_addr_t nextHopAddress_p, uint16_t nextHopBackpressure_p);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void BcpForwardingEngineP__snoopHandlerTask__runTask(void );
# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/RootControl.nc"
static bool BcpRoutingEngineP__RootControl__isRoot(void );
#line 41
static error_t BcpRoutingEngineP__RootControl__setRoot(void );
static error_t BcpRoutingEngineP__RootControl__unsetRoot(void );
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BcpRoutingEngineP__BlacklistTimer__fired(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t BcpRoutingEngineP__Init__init(void );
# 30 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
static void BcpRoutingEngineP__RouterForwarderIF__txNoAck(am_addr_t neighbor_p);
#line 45
static void BcpRoutingEngineP__RouterForwarderIF__updateNeighborBackpressure(am_addr_t neighbor_p, uint16_t rcvBackpressure_p);
#line 8
static error_t BcpRoutingEngineP__RouterForwarderIF__updateRouting(uint16_t localBackpressure_p);
#line 52
static void BcpRoutingEngineP__RouterForwarderIF__updateNeighborSnoop(uint16_t localBackpressure_p, uint16_t snoopBackpressure_p, 
uint16_t nhBackpressure_p, uint8_t nodeTxCount_p, 
am_addr_t neighbor_p, am_addr_t burstNotifyAddr);
#line 32
static void BcpRoutingEngineP__RouterForwarderIF__updateLinkSuccess(am_addr_t neighbor_p, uint8_t txCount_p);





static void BcpRoutingEngineP__RouterForwarderIF__updateLinkRate(am_addr_t neighbor_p, uint16_t newLinkPacketTxTime_p);
# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t BcpRoutingEngineP__StdControl__start(void );
# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__t * 


/*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 80
static uint8_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__maxSize(void );
#line 61
static bool /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void );
#line 89
static error_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__put(
#line 85
/*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__t * newVal);
#line 72
static uint8_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__size(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Init__init(void );
# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__t * 


/*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 80
static uint8_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__maxSize(void );
#line 61
static bool /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void );
#line 89
static error_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__put(
#line 85
/*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__t * newVal);
#line 72
static uint8_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__size(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Init__init(void );
#line 51
static error_t /*BcpC.SnoopPoolP.PoolP*/PoolP__2__Init__init(void );
# 75 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/Stack.nc"
static 
#line 73
/*BcpC.SendStack*/StackC__0__Stack__t  

/*BcpC.SendStack*/StackC__0__Stack__top(void );
#line 108
static error_t /*BcpC.SendStack*/StackC__0__Stack__pushTop(
#line 104
/*BcpC.SendStack*/StackC__0__Stack__t  newVal);
#line 99
static 
#line 97
/*BcpC.SendStack*/StackC__0__Stack__t  

/*BcpC.SendStack*/StackC__0__Stack__popBottom(void );
#line 83
static 
#line 81
/*BcpC.SendStack*/StackC__0__Stack__t  

/*BcpC.SendStack*/StackC__0__Stack__popTop(void );
#line 67
static uint8_t /*BcpC.SendStack*/StackC__0__Stack__maxSize(void );
#line 91
static 
#line 89
/*BcpC.SendStack*/StackC__0__Stack__t  

/*BcpC.SendStack*/StackC__0__Stack__bottom(void );
#line 52
static bool /*BcpC.SendStack*/StackC__0__Stack__empty(void );







static uint8_t /*BcpC.SendStack*/StackC__0__Stack__size(void );
# 73 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*BcpC.SnoopQueue*/QueueC__0__Queue__t  

/*BcpC.SnoopQueue*/QueueC__0__Queue__head(void );
#line 90
static error_t /*BcpC.SnoopQueue*/QueueC__0__Queue__enqueue(
#line 86
/*BcpC.SnoopQueue*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*BcpC.SnoopQueue*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*BcpC.SnoopQueue*/QueueC__0__Queue__t  

/*BcpC.SnoopQueue*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*BcpC.SnoopQueue*/QueueC__0__Queue__empty(void );







static uint8_t /*BcpC.SnoopQueue*/QueueC__0__Queue__size(void );
# 98 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 92
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 105
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 62
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 61 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
#line 52
static HplAtm128Timer0AsyncP__Timer0__timer_size HplAtm128Timer0AsyncP__Timer0__get(void );
#line 101
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void );
#line 58
static void HplAtm128Timer0AsyncP__Timer0__set(HplAtm128Timer0AsyncP__Timer0__timer_size t);
# 44 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 44 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void );
#line 37
static void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t control);
# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 125 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 118
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 125
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 37 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e96868);
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 37 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e96868);
# 87 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isOneShot(
# 37 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e96868);
# 81 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 37 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e96868);
# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 37 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e96868, 
# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 37 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e96868, 
# 62 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 37 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e96868);
# 71 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 112
static uint8_t /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void );
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f1a908, 
# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 38 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40ee7e80, 
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(
# 38 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40ee7e80, 
# 111 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(
# 38 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40ee7e80);
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 38 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40ee7e80, 
# 85 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 64
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__maxPayloadLength(void );
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
#line 89
static void BcpRateControllerP__SubSend__sendDone(
#line 85
message_t * msg, 



error_t error);
#line 64
static error_t BcpRateControllerP__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 2 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpCongestionIF.nc"
static void BcpRateControllerP__BcpCongestionIF__congestionNotify(void );
static void BcpRateControllerP__BcpCongestionIF__noCongestionNotify(void );
static void BcpRateControllerP__BcpCongestionIF__updateRateControlInfo(uint16_t reVal, uint16_t seqNo);
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void BcpRateControllerP__admissionTimer__fired(void );
# 2 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControlIF.nc"
static uint8_t BcpRateControllerP__RateControlIF__getValphaUpper(void );

static uint8_t BcpRateControllerP__RateControlIF__getValphaValue(void );
#line 3
static uint8_t BcpRateControllerP__RateControlIF__getSeqenceNo(void );
# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint32_t /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__Random__rand32(void );
# 55 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Set.nc"
static void /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__setMean__set(/*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__setMean__val_t val);
# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__t * 


/*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__get(void );
#line 61
static bool /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__empty(void );
#line 89
static error_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__put(
#line 85
/*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__t * newVal);
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Init__init(void );
# 73 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*BcpRateControllerC.modQueue*/QueueC__1__Queue__t  

/*BcpRateControllerC.modQueue*/QueueC__1__Queue__head(void );
#line 90
static error_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__enqueue(
#line 86
/*BcpRateControllerC.modQueue*/QueueC__1__Queue__t  newVal);
#line 65
static uint8_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__maxSize(void );
#line 81
static 
#line 79
/*BcpRateControllerC.modQueue*/QueueC__1__Queue__t  

/*BcpRateControllerC.modQueue*/QueueC__1__Queue__dequeue(void );
#line 50
static bool /*BcpRateControllerC.modQueue*/QueueC__1__Queue__empty(void );







static uint8_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__size(void );
# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint32_t /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__Random__rand32(void );
# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SafeSerialSendM__StdControl__start(void );
# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SafeSerialSendM__SerialControl__startDone(error_t error);
#line 117
static void SafeSerialSendM__SerialControl__stopDone(error_t error);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SafeSerialSendM__sendTask__runTask(void );
# 25 "SafeSerialSendIF.nc"
static void SafeSerialSendM__SafeSerialSendIF__queueMessageBuffer(message_t *sendMsg_p);
#line 16
static void *SafeSerialSendM__SafeSerialSendIF__getPayload(message_t *msg_p, uint8_t size_p);
#line 9
static message_t *SafeSerialSendM__SafeSerialSendIF__getMessageBuffer(void );
# 73 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__t  

/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__head(void );
#line 90
static error_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__enqueue(
#line 86
/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__t  newVal);
#line 65
static uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__maxSize(void );
#line 58
static uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__size(void );
# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Pool__t * 


/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Pool__get(void );
#line 61
static bool /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Pool__empty(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Init__init(void );
# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialActiveMessageC__SplitControl__start(void );
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t SerialActiveMessageC__AMSend__send(
# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
am_id_t arg_0x40ff60a0, 
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t SerialActiveMessageC__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


SerialActiveMessageC__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 83
static void SerialActiveMessageC__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialActiveMessageC__startDone__runTask(void );
#line 64
static void SerialActiveMessageC__stopDone__runTask(void );
# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/RootControl.nc"
static error_t BcpCollectionExampleC__RootControl__setRoot(void );
static error_t BcpCollectionExampleC__RootControl__unsetRoot(void );
# 115 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static 
#line 112
void * 


BcpCollectionExampleC__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 83
static void BcpCollectionExampleC__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t BcpCollectionExampleC__SerialControl__start(void );
# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t BcpCollectionExampleC__RadioControl__start(void );
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t BcpCollectionExampleC__Send__send(
#line 56
message_t * msg, 







uint8_t len);
# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint32_t BcpCollectionExampleC__Random__rand32(void );
# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t BcpCollectionExampleC__ProtoControl__start(void );
# 50 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
static void BcpCollectionExampleC__Leds__led0Off(void );
#line 66
static void BcpCollectionExampleC__Leds__led1Off(void );
#line 83
static void BcpCollectionExampleC__Leds__led2Off(void );
#line 45
static void BcpCollectionExampleC__Leds__led0On(void );
# 58 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpPacket.nc"
static uint8_t BcpCollectionExampleC__BcpPacket__getHopCount(message_t *msg);
static uint8_t BcpCollectionExampleC__BcpPacket__getBCPPktType(message_t *msg);
#line 44
static void BcpCollectionExampleC__BcpPacket__setOrigin(message_t *msg, am_addr_t addr);
#line 43
static am_addr_t BcpCollectionExampleC__BcpPacket__getOrigin(message_t *msg);






static uint32_t BcpCollectionExampleC__BcpPacket__getDelay(message_t *msg);
#line 45
static uint8_t BcpCollectionExampleC__BcpPacket__getSequenceNumber(message_t *msg);





static uint16_t BcpCollectionExampleC__BcpPacket__getTxCount(message_t *msg);
# 25 "SafeSerialSendIF.nc"
static void BcpCollectionExampleC__SafeSerialSendIF__queueMessageBuffer(message_t *sendMsg_p);
#line 16
static void *BcpCollectionExampleC__SafeSerialSendIF__getPayload(message_t *msg_p, uint8_t size_p);
#line 9
static message_t *BcpCollectionExampleC__SafeSerialSendIF__getMessageBuffer(void );
# 57 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t BcpCollectionExampleC__AMPacket__address(void );
# 125 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t BcpCollectionExampleC__Timer__getNow(void );
#line 62
static void BcpCollectionExampleC__Timer__startOneShot(uint32_t dt);
# 43 "BcpCollectionExampleC.nc"
message_t BcpCollectionExampleC__packet[1000];





uint32_t BcpCollectionExampleC__count[1000];



uint16_t BcpCollectionExampleC__testTime[1000];



#line 55
typedef nx_struct BcpCollectionExampleC__BCPMsg {
  nx_uint32_t data;
} __attribute__((packed)) BcpCollectionExampleC__BCPMsg;

static inline void BcpCollectionExampleC__Boot__booted(void );
#line 95
static inline void BcpCollectionExampleC__RadioControl__startDone(error_t err);
#line 121
static inline void BcpCollectionExampleC__RadioControl__stopDone(error_t err);




static inline void BcpCollectionExampleC__sendMessage(void );
#line 204
static inline void BcpCollectionExampleC__sinkTimer__fired(void );
#line 397
static inline void BcpCollectionExampleC__Timer__fired(void );










static message_t *BcpCollectionExampleC__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 450
static inline void BcpCollectionExampleC__Send__sendDone(message_t *msg, error_t error);
#line 518
static void BcpCollectionExampleC__BcpDebugIF__reportBackpressure(uint32_t dataQueueSize_p, uint32_t virtualQueueSize_p, uint16_t localTXCount_p, uint8_t origin_p, uint8_t originSeqNo_p, uint8_t reportSource_p);
#line 544
static void BcpCollectionExampleC__BcpDebugIF__reportError(uint8_t type_p);
#line 565
static inline void BcpCollectionExampleC__BcpDebugIF__reportLinkRate(uint8_t neighbor_p, uint16_t previousLinkPacketTxTime_p, 
uint16_t updateLinkPacketTxTime_p, uint16_t newLinkPacketTxTime_p, 
uint16_t latestLinkPacktLossEst_p);
#line 597
static void BcpCollectionExampleC__BcpDebugIF__reportValues(uint32_t field1_p, uint32_t field2_p, uint32_t field3_p, uint16_t field4_p, 
uint16_t field5_p, uint16_t field6_p, uint8_t field7_p, uint8_t field8_p);
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 51
static error_t PlatformP__MeasureClock__init(void );
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 33 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 30
static void MotePlatformP__SerialIdPin__clr(void );
# 26 "/home/xinchaol/local/src/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
#line 38
static inline error_t MotePlatformP__SubInit__default__init(void );
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 45
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 50
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
# 21 "/home/xinchaol/local/src/tinyos-2.x/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SimMainP__SoftwareInit__init(void );
# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Boot.nc"
static void SimMainP__Boot__booted(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SimMainP__PlatformInit__init(void );
# 46 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SimMainP__Scheduler__init(void );







static bool SimMainP__Scheduler__runNextTask(void );
# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__runTask(
# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x406b1650);



enum SimSchedulerBasicP____nesc_unnamed4340 {

  SimSchedulerBasicP__NUM_TASKS = 15U, 
  SimSchedulerBasicP__NO_TASK = 255
};

uint8_t SimSchedulerBasicP__m_head[1000];
uint8_t SimSchedulerBasicP__m_tail[1000];
uint8_t SimSchedulerBasicP__m_next[1000][SimSchedulerBasicP__NUM_TASKS];




bool SimSchedulerBasicP__sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP__sim_scheduler_event[1000];

static inline int SimSchedulerBasicP__sim_config_task_latency(void );







static void SimSchedulerBasicP__sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e);
#line 95
static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e);
#line 112
static inline uint8_t SimSchedulerBasicP__popTask(void );
#line 131
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP__pushTask(uint8_t id);
#line 158
static inline void SimSchedulerBasicP__Scheduler__init(void );
#line 172
static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
#line 197
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id);
#line 213
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 44 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP__euid[1000];
long long int SimMoteP__startTime[1000];
bool SimMoteP__isOn[1000];
sim_event_t *SimMoteP__bootEvent[1000];

uint8_t SimMoteP__radioChannel[1000];




static inline error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel);
#line 67
static inline uint8_t SimMoteP__SimMote__getRadioChannel(void );
#line 79
error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel)   ;
#line 91
uint8_t sim_mote_get_radio_channel(int mote)   ;








static inline long long int SimMoteP__SimMote__getEuid(void );


static inline void SimMoteP__SimMote__setEuid(long long int e);


static inline long long int SimMoteP__SimMote__getStartTime(void );


static inline bool SimMoteP__SimMote__isOn(void );



static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP__SimMote__turnOn(void );
#line 130
static inline void SimMoteP__SimMote__turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 110 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static bool CC2420CsmaP__CC2420Config__isAutoAckEnabled(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t CC2420CsmaP__Packet__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


CC2420CsmaP__Packet__getPayload(
#line 110
message_t * msg, 




uint8_t len);
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void CC2420CsmaP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 15 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
static am_addr_t CC2420CsmaP__amAddress(void );
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/sim/CC2420PacketBody.nc"
static tossim_header_t *CC2420CsmaP__CC2420PacketBody__getHeader(message_t *msg);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



CC2420CsmaP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static error_t CC2420CsmaP__Model__send(int node, message_t *msg, uint8_t len);
# 77 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t CC2420CsmaP__AMPacket__source(
#line 73
message_t * amsg);
#line 67
static am_addr_t CC2420CsmaP__AMPacket__destination(
#line 63
message_t * amsg);
# 20 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
message_t CC2420CsmaP__buffer[1000];
message_t *CC2420CsmaP__bufferPointer[1000];

static inline tossim_header_t *CC2420CsmaP__getHeader(message_t *amsg);




static inline error_t CC2420CsmaP__SplitControl__start(void );







static inline error_t CC2420CsmaP__Send__send(message_t *msg, uint8_t len);
#line 49
static void CC2420CsmaP__Model__sendDone(message_t *msg, error_t result);






static void CC2420CsmaP__Model__receive(message_t *msg);
#line 69
static inline bool CC2420CsmaP__Model__shouldAck(message_t *msg);
#line 87
static inline void CC2420CsmaP__active_message_deliver_handle(sim_event_t *evt);






static inline sim_event_t *CC2420CsmaP__allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 107
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;





static inline void CC2420CsmaP__CC2420Config__syncDone(error_t error);
# 32 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static bool LedsP__Led0__get(void );


static void LedsP__Led0__makeOutput(void );
#line 29
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );

static bool LedsP__Led1__get(void );


static void LedsP__Led1__makeOutput(void );
#line 29
static void LedsP__Led1__set(void );


static bool LedsP__Led2__get(void );


static void LedsP__Led2__makeOutput(void );
#line 29
static void LedsP__Led2__set(void );
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 63
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );
#line 83
static void LedsP__Leds__led1Off(void );
#line 98
static void LedsP__Leds__led2Off(void );
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t TossimActiveMessageP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
# 59 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SendNotifier.nc"
static void TossimActiveMessageP__SendNotifier__aboutToSend(
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
am_id_t arg_0x409991d0, 
# 59 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void TossimActiveMessageP__AMSend__sendDone(
# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
am_id_t arg_0x40985a88, 
# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TossimActiveMessageP__Snoop__receive(
# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
am_id_t arg_0x4097ab00, 
# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static am_addr_t TossimActiveMessageP__amAddress(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



TossimActiveMessageP__Receive__receive(
# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
am_id_t arg_0x4097a468, 
# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 55 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
message_t TossimActiveMessageP__buffer[1000];


static inline tossim_header_t *TossimActiveMessageP__getHeader(message_t *amsg);




static error_t TossimActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 80
static inline uint8_t TossimActiveMessageP__AMSend__maxPayloadLength(am_id_t id);
static inline void *TossimActiveMessageP__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len);

static inline am_addr_t TossimActiveMessageP__AMPacket__address(void );

static am_addr_t TossimActiveMessageP__AMPacket__destination(message_t *amsg);





static void TossimActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr);





static am_addr_t TossimActiveMessageP__AMPacket__source(message_t *amsg);
#line 109
static inline bool TossimActiveMessageP__AMPacket__isForMe(message_t *amsg);






static am_id_t TossimActiveMessageP__AMPacket__type(message_t *amsg);





static void TossimActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t t);







static inline uint8_t TossimActiveMessageP__Packet__payloadLength(message_t *msg);
static inline void TossimActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len);
static inline uint8_t TossimActiveMessageP__Packet__maxPayloadLength(void );

static inline void *TossimActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len);
#line 153
static inline message_t *TossimActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
static inline message_t *TossimActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);





static inline message_t *TossimActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 173
static inline void TossimActiveMessageP__SubSend__sendDone(message_t *msg, error_t error);
static inline void TossimActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);
# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
enum CC2420ControlP____nesc_unnamed4341 {
#line 39
  CC2420ControlP__syncDoneTask = 0U
};
#line 39
typedef int CC2420ControlP____nesc_sillytask_syncDoneTask[CC2420ControlP__syncDoneTask];
#line 12
uint8_t CC2420ControlP__channel[1000];




bool CC2420ControlP__autoAck[1000];
bool CC2420ControlP__hwAutoAck[1000];

static inline error_t CC2420ControlP__Init__init(void );
#line 39
static inline void CC2420ControlP__syncDoneTask__runTask(void );
#line 79
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
# 63 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Read.nc"
static void CpmModelC__ReadRssi__readDone(error_t result, CpmModelC__ReadRssi__val_t val);
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC__Model__receive(message_t *msg);
#line 50
static void CpmModelC__Model__acked(message_t *msg);

static bool CpmModelC__Model__shouldAck(message_t *msg);
# 499 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
enum CpmModelC____nesc_unnamed4342 {
#line 499
  CpmModelC__read_rssi_task = 1U
};
#line 499
typedef int CpmModelC____nesc_sillytask_read_rssi_task[CpmModelC__read_rssi_task];
#line 52
message_t *CpmModelC__outgoing[1000];
bool CpmModelC__requestAck[1000];
bool CpmModelC__receiving[1000];
bool CpmModelC__rssi[1000];
struct CpmModelC__receive_message;
typedef struct CpmModelC__receive_message CpmModelC__receive_message_t;

struct CpmModelC__receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC__receive_message_t *next;
  uint8_t channel;
  uint8_t lqi;
};

CpmModelC__receive_message_t *CpmModelC__outstandingReceptionHead[1000];

static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void );
static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg);
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t t, CpmModelC__receive_message_t *m);

static bool CpmModelC__shouldReceive(double SNR);
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg);
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg);


static inline double CpmModelC__timeInMs(void );
#line 121
static double CpmModelC__noise_hash_generation(void );
#line 146
static inline double CpmModelC__arr_estimate_from_snr(double SNR);
#line 162
static inline int CpmModelC__shouldAckReceive(double snr);
#line 174
static inline void CpmModelC__sim_gain_ack_handle(sim_event_t *evt);
#line 196
double CpmModelC__clearThreshold[1000];










static inline bool CpmModelC__Model__clearChannel(void );




static void CpmModelC__sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC__receive_message_t *r);
#line 226
static inline double CpmModelC__prr_estimate_from_snr(double SNR);
#line 242
static bool CpmModelC__shouldReceive(double SNR);
#line 254
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg);
#line 279
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg);
#line 310
static inline void CpmModelC__sim_gain_receive_handle(sim_event_t *evt);
#line 390
static inline void CpmModelC__enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 453
static inline void CpmModelC__sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 479
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t endTime, CpmModelC__receive_message_t *msg);
#line 491
static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void );



static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg);



static inline void CpmModelC__read_rssi_task__runTask(void );
#line 519
static inline void CpmModelC__ReadRssi__default__readDone(error_t error, uint16_t data);
# 77 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC__Packet__receive(message_t *msg);
#line 68
static void TossimPacketModelC__Packet__sendDone(message_t *msg, error_t error);










static bool TossimPacketModelC__Packet__shouldAck(message_t *msg);
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC__startDoneTask__postTask(void );
# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC__Control__startDone(error_t error);
#line 117
static void TossimPacketModelC__Control__stopDone(error_t error);
# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC__GainRadioModel__putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool TossimPacketModelC__GainRadioModel__clearChannel(void );
# 88 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC____nesc_unnamed4343 {
#line 88
  TossimPacketModelC__startDoneTask = 2U
};
#line 88
typedef int TossimPacketModelC____nesc_sillytask_startDoneTask[TossimPacketModelC__startDoneTask];




enum TossimPacketModelC____nesc_unnamed4344 {
#line 93
  TossimPacketModelC__stopDoneTask = 3U
};
#line 93
typedef int TossimPacketModelC____nesc_sillytask_stopDoneTask[TossimPacketModelC__stopDoneTask];
#line 137
enum TossimPacketModelC____nesc_unnamed4345 {
#line 137
  TossimPacketModelC__sendDoneTask = 4U
};
#line 137
typedef int TossimPacketModelC____nesc_sillytask_sendDoneTask[TossimPacketModelC__sendDoneTask];
#line 62
bool TossimPacketModelC__initialized[1000];
bool TossimPacketModelC__running[1000];
uint8_t TossimPacketModelC__backoffCount[1000];
uint8_t TossimPacketModelC__neededFreeSamples[1000];
message_t *TossimPacketModelC__sending[1000];
bool TossimPacketModelC__transmitting[1000];
uint8_t TossimPacketModelC__sendingLength[1000];
int TossimPacketModelC__destNode[1000];
sim_event_t TossimPacketModelC__sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC__getMetadata(message_t *msg);



static inline error_t TossimPacketModelC__Init__init(void );









static inline void TossimPacketModelC__startDoneTask__runTask(void );




static inline void TossimPacketModelC__stopDoneTask__runTask(void );




static error_t TossimPacketModelC__Control__start(void );
#line 120
static inline error_t TossimPacketModelC__PacketAcknowledgements__requestAck(message_t *msg);
#line 132
static inline error_t TossimPacketModelC__PacketAcknowledgements__wasAcked(message_t *ack);




static inline void TossimPacketModelC__sendDoneTask__runTask(void );
#line 151
static inline void TossimPacketModelC__start_csma(void );

static inline error_t TossimPacketModelC__Packet__send(int dest, message_t *msg, uint8_t len);
#line 175
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC__send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC__send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC__start_csma(void );
#line 203
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt);
#line 240
static inline int TossimPacketModelC__sim_packet_header_length(void );



static inline void TossimPacketModelC__send_transmit(sim_event_t *evt);
#line 271
static inline void TossimPacketModelC__send_transmit_done(sim_event_t *evt);







static inline void TossimPacketModelC__GainRadioModel__receive(message_t *msg);





uint8_t TossimPacketModelC__error[1000];

static inline void TossimPacketModelC__GainRadioModel__acked(message_t *msg);










static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg);
# 70 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/packet/sim/CC2420PacketP.nc"
static inline tossim_header_t *CC2420PacketP__CC2420PacketBody__getHeader(message_t *msg);
# 50 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC__set[1000];
am_addr_t ActiveMessageAddressC__addr[1000];

static am_addr_t ActiveMessageAddressC__amAddress(void );
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t UniqueSendP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
#line 89
static void UniqueSendP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint16_t UniqueSendP__Random__rand16(void );
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/sim/CC2420PacketBody.nc"
static tossim_header_t *UniqueSendP__CC2420PacketBody__getHeader(message_t *msg);
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/State.nc"
static void UniqueSendP__State__toIdle(void );
#line 45
static error_t UniqueSendP__State__requestState(uint8_t reqState);
# 54 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP__localSendId[1000];

enum UniqueSendP____nesc_unnamed4346 {
  UniqueSendP__S_IDLE, 
  UniqueSendP__S_SENDING
};


static inline error_t UniqueSendP__Init__init(void );
#line 75
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len);
#line 105
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error);
# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP__state[1000][2U];

enum StateImplP____nesc_unnamed4347 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static inline error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 118
static inline void StateImplP__State__toIdle(uint8_t id);
# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed[1000];


static inline error_t RandomMlcgC__Init__init(void );
#line 58
static uint32_t RandomMlcgC__Random__rand32(void );
#line 78
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/sim/CC2420PacketBody.nc"
static tossim_header_t *UniqueReceiveP__CC2420PacketBody__getHeader(message_t *msg);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



UniqueReceiveP__DuplicateReceive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 59 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP____nesc_unnamed4348 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP__receivedMessages[1000][4];

uint8_t UniqueReceiveP__writeIndex[1000];


uint8_t UniqueReceiveP__recycleSourceElement[1000];

enum UniqueReceiveP____nesc_unnamed4349 {
  UniqueReceiveP__INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP__Init__init(void );









static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);


static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);
#line 115
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 141
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
#line 162
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len);
# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/RootControl.nc"
static bool BcpForwardingEngineP__RootControl__isRoot(void );
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t BcpForwardingEngineP__SubSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 112
static uint8_t BcpForwardingEngineP__SubSend__maxPayloadLength(void );
# 2 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpCongestionIF.nc"
static void BcpForwardingEngineP__BcpCongestionIF__congestionNotify(void );
static void BcpForwardingEngineP__BcpCongestionIF__noCongestionNotify(void );
static void BcpForwardingEngineP__BcpCongestionIF__updateRateControlInfo(uint16_t reVal, uint16_t seqNo);
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void BcpForwardingEngineP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 6 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
static void BcpForwardingEngineP__BcpDebugIF__reportBackpressure(uint32_t dataQueueSize_p, uint32_t virtualQueueSize_p, uint16_t localTXCount_p, uint8_t origin_p, uint8_t originSeqNo_p, uint8_t reportSource_p);




static void BcpForwardingEngineP__BcpDebugIF__reportError(uint8_t type_p);
#line 23
static void BcpForwardingEngineP__BcpDebugIF__reportValues(uint32_t field1_p, uint32_t field2_p, uint32_t field3_p, uint16_t field4_p, 
uint16_t field5_p, uint16_t field6_p, uint8_t field7_p, uint8_t field8_p);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t BcpForwardingEngineP__SubPacket__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


BcpForwardingEngineP__SubPacket__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 95
static uint8_t BcpForwardingEngineP__SubPacket__maxPayloadLength(void );
#line 83
static void BcpForwardingEngineP__SubPacket__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 48 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static error_t BcpForwardingEngineP__DataPacketAcknowledgements__requestAck(
#line 42
message_t * msg);
#line 74
static bool BcpForwardingEngineP__DataPacketAcknowledgements__wasAcked(
#line 69
message_t * msg);
# 125 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t BcpForwardingEngineP__txRetryTimer__getNow(void );
#line 62
static void BcpForwardingEngineP__txRetryTimer__startOneShot(uint32_t dt);
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t BcpForwardingEngineP__BeaconSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

BcpForwardingEngineP__BeaconSend__getPayload(
#line 121
message_t * msg, 


uint8_t len);
#line 112
static uint8_t BcpForwardingEngineP__BeaconSend__maxPayloadLength(void );
# 73 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
BcpForwardingEngineP__SnoopQueue__t  

BcpForwardingEngineP__SnoopQueue__head(void );
#line 90
static error_t BcpForwardingEngineP__SnoopQueue__enqueue(
#line 86
BcpForwardingEngineP__SnoopQueue__t  newVal);
#line 65
static uint8_t BcpForwardingEngineP__SnoopQueue__maxSize(void );
#line 81
static 
#line 79
BcpForwardingEngineP__SnoopQueue__t  

BcpForwardingEngineP__SnoopQueue__dequeue(void );
#line 50
static bool BcpForwardingEngineP__SnoopQueue__empty(void );







static uint8_t BcpForwardingEngineP__SnoopQueue__size(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 63
message_t * 



BcpForwardingEngineP__Receive__receive(
#line 60
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t BcpForwardingEngineP__sendBeaconTask__postTask(void );
#line 56
static error_t BcpForwardingEngineP__sendDataTask__postTask(void );
# 108 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/Stack.nc"
static error_t BcpForwardingEngineP__SendStack__pushTop(
#line 104
BcpForwardingEngineP__SendStack__t  newVal);
#line 99
static 
#line 97
BcpForwardingEngineP__SendStack__t  

BcpForwardingEngineP__SendStack__popBottom(void );
#line 83
static 
#line 81
BcpForwardingEngineP__SendStack__t  

BcpForwardingEngineP__SendStack__popTop(void );
#line 67
static uint8_t BcpForwardingEngineP__SendStack__maxSize(void );
#line 52
static bool BcpForwardingEngineP__SendStack__empty(void );







static uint8_t BcpForwardingEngineP__SendStack__size(void );
# 87 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool BcpForwardingEngineP__BeaconTimer__isOneShot(void );
#line 81
static bool BcpForwardingEngineP__BeaconTimer__isRunning(void );
#line 53
static void BcpForwardingEngineP__BeaconTimer__startPeriodic(uint32_t dt);








static void BcpForwardingEngineP__BeaconTimer__startOneShot(uint32_t dt);




static void BcpForwardingEngineP__BeaconTimer__stop(void );
# 77 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t BcpForwardingEngineP__AMDataPacket__source(
#line 73
message_t * amsg);
#line 67
static am_addr_t BcpForwardingEngineP__AMDataPacket__destination(
#line 63
message_t * amsg);
# 125 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t BcpForwardingEngineP__DelayPacketTimer__getNow(void );
# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
BcpForwardingEngineP__QEntryPool__t * 


BcpForwardingEngineP__QEntryPool__get(void );
#line 80
static uint8_t BcpForwardingEngineP__QEntryPool__maxSize(void );
#line 61
static bool BcpForwardingEngineP__QEntryPool__empty(void );
#line 89
static error_t BcpForwardingEngineP__QEntryPool__put(
#line 85
BcpForwardingEngineP__QEntryPool__t * newVal);
#line 72
static uint8_t BcpForwardingEngineP__QEntryPool__size(void );
# 2 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControlIF.nc"
static uint8_t BcpForwardingEngineP__BcpRateControlIF__getValphaUpper(void );

static uint8_t BcpForwardingEngineP__BcpRateControlIF__getValphaValue(void );
#line 3
static uint8_t BcpForwardingEngineP__BcpRateControlIF__getSeqenceNo(void );
# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
BcpForwardingEngineP__MessagePool__t * 


BcpForwardingEngineP__MessagePool__get(void );
#line 80
static uint8_t BcpForwardingEngineP__MessagePool__maxSize(void );
#line 61
static bool BcpForwardingEngineP__MessagePool__empty(void );
#line 89
static error_t BcpForwardingEngineP__MessagePool__put(
#line 85
BcpForwardingEngineP__MessagePool__t * newVal);
#line 72
static uint8_t BcpForwardingEngineP__MessagePool__size(void );
# 30 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
static void BcpForwardingEngineP__RouterForwarderIF__txNoAck(am_addr_t neighbor_p);
#line 45
static void BcpForwardingEngineP__RouterForwarderIF__updateNeighborBackpressure(am_addr_t neighbor_p, uint16_t rcvBackpressure_p);
#line 8
static error_t BcpForwardingEngineP__RouterForwarderIF__updateRouting(uint16_t localBackpressure_p);
#line 52
static void BcpForwardingEngineP__RouterForwarderIF__updateNeighborSnoop(uint16_t localBackpressure_p, uint16_t snoopBackpressure_p, 
uint16_t nhBackpressure_p, uint8_t nodeTxCount_p, 
am_addr_t neighbor_p, am_addr_t burstNotifyAddr);
#line 32
static void BcpForwardingEngineP__RouterForwarderIF__updateLinkSuccess(am_addr_t neighbor_p, uint8_t txCount_p);





static void BcpForwardingEngineP__RouterForwarderIF__updateLinkRate(am_addr_t neighbor_p, uint16_t newLinkPacketTxTime_p);
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t BcpForwardingEngineP__snoopHandlerTask__postTask(void );
# 254 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
enum BcpForwardingEngineP____nesc_unnamed4350 {
#line 254
  BcpForwardingEngineP__sendBeaconTask = 5U
};
#line 254
typedef int BcpForwardingEngineP____nesc_sillytask_sendBeaconTask[BcpForwardingEngineP__sendBeaconTask];
#line 286
enum BcpForwardingEngineP____nesc_unnamed4351 {
#line 286
  BcpForwardingEngineP__snoopHandlerTask = 6U
};
#line 286
typedef int BcpForwardingEngineP____nesc_sillytask_snoopHandlerTask[BcpForwardingEngineP__snoopHandlerTask];
#line 335
enum BcpForwardingEngineP____nesc_unnamed4352 {
#line 335
  BcpForwardingEngineP__sendDataTask = 7U
};
#line 335
typedef int BcpForwardingEngineP____nesc_sillytask_sendDataTask[BcpForwardingEngineP__sendDataTask];
#line 53
static void BcpForwardingEngineP__forwarderActivity(void );





uint8_t BcpForwardingEngineP__latestForwardedTableActive[1000];
latestForwarded_table_entry BcpForwardingEngineP__latestForwardedTable[1000][ROUTING_TABLE_SIZE];




uint8_t BcpForwardingEngineP__seqno[1000];
uint8_t BcpForwardingEngineP__nullSeqNo[1000];




message_t BcpForwardingEngineP__beaconMsgBuffer[1000];
bcp_beacon_header_t *BcpForwardingEngineP__beaconHdr[1000];





bool BcpForwardingEngineP__beaconSending[1000];



bool BcpForwardingEngineP__running[1000];



bool BcpForwardingEngineP__sending[1000];



bool BcpForwardingEngineP__radioOn[1000];


uint16_t BcpForwardingEngineP__localTXCount[1000];


am_addr_t BcpForwardingEngineP__nextHopAddress_m[1000];
uint16_t BcpForwardingEngineP__nextHopBackpressure_m[1000];




am_addr_t BcpForwardingEngineP__notifyBurstyLinkNeighbor_m[1000];






message_t BcpForwardingEngineP__loopbackMsg[1000];
message_t * BcpForwardingEngineP__loopbackMsgPtr[1000];






fe_queue_entry_t *BcpForwardingEngineP__sendQe[1000];
bool BcpForwardingEngineP__sendQeOccupied[1000];







uint16_t BcpForwardingEngineP__virtualQueueSize[1000];



uint16_t BcpForwardingEngineP__dataCRCSuccessCount[1000];
uint16_t BcpForwardingEngineP__dataCRCFailCount[1000];
uint16_t BcpForwardingEngineP__snoopCRCSuccessCount[1000];
uint16_t BcpForwardingEngineP__snoopCRCFailCount[1000];




uint8_t BcpForwardingEngineP__Valpha[1000];
uint8_t BcpForwardingEngineP__VaSeq[1000];

uint8_t BcpForwardingEngineP__congestNodeCount[1000];
uint16_t BcpForwardingEngineP__congestNodeId[1000][CONGESTION_COUNT];


static inline bcp_data_header_t *BcpForwardingEngineP__getHeader(message_t *m);



static uint32_t BcpForwardingEngineP__calcHdrChecksum(message_t *msg);
#line 168
static void BcpForwardingEngineP__conditionalFQDiscard(void );
#line 190
static inline void BcpForwardingEngineP__latestForwardedTableInit(void );








static latestForwarded_table_entry *BcpForwardingEngineP__latestForwardedTableFind(am_addr_t neighbor_p);
#line 214
static error_t BcpForwardingEngineP__latestForwardedTableUpdate(am_addr_t from_p, am_addr_t origin_p, 
uint8_t originSeqNo_p, uint8_t hopCount_p);
#line 254
static inline void BcpForwardingEngineP__sendBeaconTask__runTask(void );
#line 286
static inline void BcpForwardingEngineP__snoopHandlerTask__runTask(void );
#line 335
static inline void BcpForwardingEngineP__sendDataTask__runTask(void );
#line 550
static void BcpForwardingEngineP__forwarderActivity(void );
#line 605
static inline message_t * BcpForwardingEngineP__forward(message_t * m, uint32_t arrivalTime_p);
#line 694
static inline error_t BcpForwardingEngineP__StdControl__start(void );
#line 714
static inline error_t BcpForwardingEngineP__Init__init(void );
#line 738
static inline error_t BcpForwardingEngineP__Send__send(message_t *msg, uint8_t len);
#line 859
static inline uint8_t BcpForwardingEngineP__Send__maxPayloadLength(void );









static inline message_t *BcpForwardingEngineP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 979
static inline uint8_t BcpForwardingEngineP__Packet__payloadLength(message_t *msg);



static inline void BcpForwardingEngineP__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t BcpForwardingEngineP__Packet__maxPayloadLength(void );



static void *BcpForwardingEngineP__Packet__getPayload(message_t *msg, uint8_t len);
#line 1009
static void BcpForwardingEngineP__SubSend__sendDone(message_t *msg, error_t error);
#line 1081
static inline void BcpForwardingEngineP__BeaconTimer__fired(void );
#line 1128
static inline void BcpForwardingEngineP__txRetryTimer__fired(void );
#line 1145
static am_addr_t BcpForwardingEngineP__BcpPacket__getOrigin(message_t *msg);
static uint8_t BcpForwardingEngineP__BcpPacket__getSequenceNumber(message_t *msg);

static inline void BcpForwardingEngineP__BcpPacket__setOrigin(message_t *msg, am_addr_t addr);

static uint32_t BcpForwardingEngineP__BcpPacket__getDelay(message_t *msg);
static uint16_t BcpForwardingEngineP__BcpPacket__getTxCount(message_t *msg);


static uint8_t BcpForwardingEngineP__BcpPacket__getHopCount(message_t *msg);
static inline uint8_t BcpForwardingEngineP__BcpPacket__getBCPPktType(message_t *msg);




static inline void BcpForwardingEngineP__RouterForwarderIF__setNextHopAddress(am_addr_t nextHopAddress_p, uint16_t nextHopBackpressure_p);




static inline void BcpForwardingEngineP__RouterForwarderIF__setNotifyBurstyLinkNeighbor(am_addr_t neighbor_p);



static void BcpForwardingEngineP__BeaconSend__sendDone(message_t *msg, error_t error);
#line 1183
static inline message_t *BcpForwardingEngineP__BeaconReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 1222
static inline void BcpForwardingEngineP__RadioControl__startDone(error_t err);






static inline void BcpForwardingEngineP__RadioControl__stopDone(error_t err);
#line 1244
static inline message_t *BcpForwardingEngineP__SubSnoop__receive(message_t *msg, void *payload, uint8_t len);
#line 1288
static inline void BcpForwardingEngineP__DelayPacketTimer__fired(void );









static inline uint16_t BcpForwardingEngineP__getBackpressure__get(void );
# 11 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
static void BcpRoutingEngineP__BcpDebugIF__reportError(uint8_t type_p);




static void BcpRoutingEngineP__BcpDebugIF__reportLinkRate(uint8_t neighbor_p, uint16_t previousLinkPacketTxTime_p, 
uint16_t updateLinkPacketTxTime_p, uint16_t newLinkPacketTxTime, 
uint16_t latestLinkPacktLossEst);




static void BcpRoutingEngineP__BcpDebugIF__reportValues(uint32_t field1_p, uint32_t field2_p, uint32_t field3_p, uint16_t field4_p, 
uint16_t field5_p, uint16_t field6_p, uint8_t field7_p, uint8_t field8_p);
# 24 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
static void BcpRoutingEngineP__RouterForwarderIF__setNotifyBurstyLinkNeighbor(am_addr_t neighbor_p);
#line 17
static void BcpRoutingEngineP__RouterForwarderIF__setNextHopAddress(am_addr_t nextHopAddress_p, uint16_t nextHopBackpressure_p);
# 16 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
uint8_t BcpRoutingEngineP__routingTableActive[1000];
routing_table_entry BcpRoutingEngineP__routingTable[1000][ROUTING_TABLE_SIZE];
bool BcpRoutingEngineP__state_is_root[1000];
bool BcpRoutingEngineP__running[1000];


static inline void BcpRoutingEngineP__routingTableInit(void );

static inline error_t BcpRoutingEngineP__Init__init(void );







static inline error_t BcpRoutingEngineP__StdControl__start(void );
#line 54
static inline void BcpRoutingEngineP__routingTableInit(void );






static uint8_t BcpRoutingEngineP__routingTableFind(am_addr_t neighbor_p);
#line 73
static error_t BcpRoutingEngineP__routingTableUpdateEntry(am_addr_t from_p, uint16_t backpressure_p);
#line 107
static inline void BcpRoutingEngineP__BlacklistTimer__fired(void );



static inline error_t BcpRoutingEngineP__RouterForwarderIF__updateRouting(uint16_t localBackpressure_p);
#line 205
static inline void BcpRoutingEngineP__RouterForwarderIF__txNoAck(am_addr_t neighbor_p);
#line 224
static void BcpRoutingEngineP__RouterForwarderIF__updateLinkSuccess(am_addr_t neighbor_p, uint8_t txCount_p);
#line 250
static inline void BcpRoutingEngineP__RouterForwarderIF__updateLinkRate(am_addr_t neighbor_p, uint16_t newLinkPacketTxTime_p);
#line 304
static inline void BcpRoutingEngineP__RouterForwarderIF__updateNeighborBackpressure(am_addr_t neighbor_p, uint16_t rcvBackpressure_p);







static inline void BcpRoutingEngineP__RouterForwarderIF__updateNeighborSnoop(uint16_t localBackpressure_p, uint16_t snoopBackpressure_p, 
uint16_t nhBackpressure_p, uint8_t nodeTxCount_p, 
am_addr_t neighbor_p, am_addr_t burstNotifyAddr);
#line 364
static error_t BcpRoutingEngineP__RootControl__setRoot(void );





static error_t BcpRoutingEngineP__RootControl__unsetRoot(void );





static inline bool BcpRoutingEngineP__RootControl__isRoot(void );
# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__free[1000];
uint8_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__index[1000];
/*BcpC.MessagePoolP.PoolP*/PoolP__0__pool_t * /*BcpC.MessagePoolP.PoolP*/PoolP__0__queue[1000][17];
/*BcpC.MessagePoolP.PoolP*/PoolP__0__pool_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__pool[1000][17];

static inline error_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Init__init(void );









static bool /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void );



static uint8_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__size(void );




static inline uint8_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__maxSize(void );



static /*BcpC.MessagePoolP.PoolP*/PoolP__0__pool_t */*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__put(/*BcpC.MessagePoolP.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[1000];
uint8_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[1000];
/*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool_t * /*BcpC.QEntryPoolP.PoolP*/PoolP__1__queue[1000][12];
/*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool[1000][12];

static inline error_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Init__init(void );









static bool /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void );



static uint8_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__size(void );




static inline uint8_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__maxSize(void );



static /*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool_t */*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 103
static error_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__put(/*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool_t *newVal);
#line 60
uint8_t /*BcpC.SnoopPoolP.PoolP*/PoolP__2__free[1000];
uint8_t /*BcpC.SnoopPoolP.PoolP*/PoolP__2__index[1000];
/*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool_t * /*BcpC.SnoopPoolP.PoolP*/PoolP__2__queue[1000][5];
/*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool_t /*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool[1000][5];

static inline error_t /*BcpC.SnoopPoolP.PoolP*/PoolP__2__Init__init(void );
# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/StackC.nc"
/*BcpC.SendStack*/StackC__0__stack_t  /*BcpC.SendStack*/StackC__0__stack[1000][11];
uint8_t /*BcpC.SendStack*/StackC__0__top[1000];
uint8_t /*BcpC.SendStack*/StackC__0__bottom[1000];
uint8_t /*BcpC.SendStack*/StackC__0__size[1000];

static inline bool /*BcpC.SendStack*/StackC__0__Stack__empty(void );



static inline uint8_t /*BcpC.SendStack*/StackC__0__Stack__size(void );



static inline uint8_t /*BcpC.SendStack*/StackC__0__Stack__maxSize(void );



static inline /*BcpC.SendStack*/StackC__0__stack_t /*BcpC.SendStack*/StackC__0__Stack__top(void );



static /*BcpC.SendStack*/StackC__0__stack_t /*BcpC.SendStack*/StackC__0__Stack__popTop(void );
#line 90
static inline /*BcpC.SendStack*/StackC__0__stack_t /*BcpC.SendStack*/StackC__0__Stack__bottom(void );



static inline /*BcpC.SendStack*/StackC__0__stack_t /*BcpC.SendStack*/StackC__0__Stack__popBottom(void );
#line 112
static error_t /*BcpC.SendStack*/StackC__0__Stack__pushTop(/*BcpC.SendStack*/StackC__0__stack_t newVal);
# 48 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
/*BcpC.SnoopQueue*/QueueC__0__queue_t  /*BcpC.SnoopQueue*/QueueC__0__queue[1000][5];
uint8_t /*BcpC.SnoopQueue*/QueueC__0__head[1000];
uint8_t /*BcpC.SnoopQueue*/QueueC__0__tail[1000];
uint8_t /*BcpC.SnoopQueue*/QueueC__0__size[1000];

static inline bool /*BcpC.SnoopQueue*/QueueC__0__Queue__empty(void );



static inline uint8_t /*BcpC.SnoopQueue*/QueueC__0__Queue__size(void );



static inline uint8_t /*BcpC.SnoopQueue*/QueueC__0__Queue__maxSize(void );



static inline /*BcpC.SnoopQueue*/QueueC__0__queue_t /*BcpC.SnoopQueue*/QueueC__0__Queue__head(void );



static void /*BcpC.SnoopQueue*/QueueC__0__printQueue(void );
#line 85
static inline /*BcpC.SnoopQueue*/QueueC__0__queue_t /*BcpC.SnoopQueue*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*BcpC.SnoopQueue*/QueueC__0__Queue__enqueue(/*BcpC.SnoopQueue*/QueueC__0__queue_t newVal);
# 44 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 37
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 71 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 52 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4353 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 61 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer0__overflow(void );
# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP__inOverflow[1000];




static inline void HplAtm128Timer0AsyncP__cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void );
static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP__lastZero[1000];





uint8_t HplAtm128Timer0AsyncP__oldScale[1000];



static inline void HplAtm128Timer0AsyncP__cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void );
static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP__schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP__last_zero(void );







static inline void HplAtm128Timer0AsyncP__notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP__notify_clockTicksPerSec(void );
#line 140
static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );
#line 177
sim_event_t *HplAtm128Timer0AsyncP__compare[1000];

static inline void HplAtm128Timer0AsyncP__timer0_compare_handle(sim_event_t *evt);
#line 215
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void );







static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *evt);
#line 259
static void HplAtm128Timer0AsyncP__schedule_new_compare(void );
#line 274
static uint8_t HplAtm128Timer0AsyncP__Timer0__get(void );
#line 289
static inline void HplAtm128Timer0AsyncP__Timer0__set(uint8_t newVal);
#line 313
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void );
#line 356
static inline void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t x);
#line 375
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void );
#line 439
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static uint8_t HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);
#line 472
sim_event_t *HplAtm128Timer0AsyncP__overflow[1000];
static inline void HplAtm128Timer0AsyncP__timer0_overflow_handle(sim_event_t *evt);
#line 492
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void );







static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *evt);
#line 526
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP__cancel_overflow(void );
#line 553
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );







static inline void HplAtm128Timer0AsyncP__cancel_compare(void );
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 98 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 92
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 105
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 62
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 63 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4354 {
#line 63
  AlarmToTimerC__0__fired = 8U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 125 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 118
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 67
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 37 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40e96868);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4355 {
#line 60
  VirtualizeTimerC__0__updateFromTimer = 9U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4356 {

  VirtualizeTimerC__0__NUM_TIMERS = 6U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4357 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 89
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 128
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isOneShot(uint8_t num);
#line 178
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 193
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 47 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 101
static uint8_t /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength(void );
# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);



static inline uint8_t /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void );
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f1a908, 
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
#line 124
static 
#line 122
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(
# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f1a908, 
# 121 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(
# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40f1a908);
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 38 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40ee7e80, 
# 85 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 63
message_t * msg);
#line 83
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 63
message_t * amsg);
#line 136
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 132
message_t * amsg);
# 118 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4358 {
#line 118
  AMQueueImplP__0__CancelTask = 10U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4359 {
#line 161
  AMQueueImplP__0__errorTask = 11U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4360 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1000][2];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1000][2 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 82
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 181
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 199
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(uint8_t id);



static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 92
message_t * msg, 






error_t error);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__send(
#line 56
message_t * msg, 







uint8_t len);
#line 114
static 
#line 112
void * 

/*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(
#line 111
message_t * msg, 


uint8_t len);
#line 101
static uint8_t /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__maxPayloadLength(void );
# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
static void /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(
#line 88
message_t * amsg, 



am_addr_t addr);
#line 151
static void /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(
#line 147
message_t * amsg, 



am_id_t t);
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);



static inline uint8_t /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__maxPayloadLength(void );



static inline void */*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(message_t *m, uint8_t len);
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static error_t BcpRateControllerP__SubSend__send(
#line 56
message_t * msg, 







uint8_t len);
# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint32_t BcpRateControllerP__exponentialRandom__rand32(void );
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
static void BcpRateControllerP__Send__sendDone(
#line 85
message_t * msg, 



error_t error);
# 11 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
static void BcpRateControllerP__BcpDebugIF__reportError(uint8_t type_p);
#line 23
static void BcpRateControllerP__BcpDebugIF__reportValues(uint32_t field1_p, uint32_t field2_p, uint32_t field3_p, uint16_t field4_p, 
uint16_t field5_p, uint16_t field6_p, uint8_t field7_p, uint8_t field8_p);
# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
BcpRateControllerP__modPool__t * 


BcpRateControllerP__modPool__get(void );
#line 61
static bool BcpRateControllerP__modPool__empty(void );
#line 89
static error_t BcpRateControllerP__modPool__put(
#line 85
BcpRateControllerP__modPool__t * newVal);
# 55 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Get.nc"
static BcpRateControllerP__getBackpressure__val_t BcpRateControllerP__getBackpressure__get(void );
# 81 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static bool BcpRateControllerP__admissionTimer__isRunning(void );
#line 62
static void BcpRateControllerP__admissionTimer__startOneShot(uint32_t dt);
# 73 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
BcpRateControllerP__modQueue__t  

BcpRateControllerP__modQueue__head(void );
#line 90
static error_t BcpRateControllerP__modQueue__enqueue(
#line 86
BcpRateControllerP__modQueue__t  newVal);
#line 81
static 
#line 79
BcpRateControllerP__modQueue__t  

BcpRateControllerP__modQueue__dequeue(void );
#line 50
static bool BcpRateControllerP__modQueue__empty(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t BcpRateControllerP__subPacket__payloadLength(
#line 63
message_t * msg);
# 55 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Set.nc"
static void BcpRateControllerP__setMean__set(BcpRateControllerP__setMean__val_t val);
# 24 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
uint8_t BcpRateControllerP__Vmax[1000];
uint8_t BcpRateControllerP__Valpha[1000];
uint8_t BcpRateControllerP__seqNo[1000];
uint8_t BcpRateControllerP__Tretx[1000];
uint8_t BcpRateControllerP__Tthreshold[1000];
#line 43
static inline uint16_t BcpRateControllerP__fourthRoot(uint32_t A_p);
#line 62
static void BcpRateControllerP__startAdmissionTimer(void );
#line 87
static inline void BcpRateControllerP__BcpCongestionIF__congestionNotify(void );
#line 99
static inline void BcpRateControllerP__BcpCongestionIF__noCongestionNotify(void );







static void BcpRateControllerP__BcpCongestionIF__updateRateControlInfo(uint16_t reVal, 
uint16_t reSeqNo);







static inline uint8_t BcpRateControllerP__RateControlIF__getValphaUpper(void );



static inline uint8_t BcpRateControllerP__RateControlIF__getValphaValue(void );



static inline uint8_t BcpRateControllerP__RateControlIF__getSeqenceNo(void );
#line 145
static inline error_t BcpRateControllerP__Send__send(
#line 137
message_t * msg, 







uint8_t len);
#line 236
static inline void BcpRateControllerP__SubSend__sendDone(
#line 232
message_t * msg, 



error_t error);
#line 255
static inline void BcpRateControllerP__admissionTimer__fired(void );
# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint32_t /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__subRandom__rand32(void );
# 8 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/exponentialRandomM.nc"
uint32_t /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__mean_m[1000];

static inline void /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__setMean__set(uint32_t mean_p);










static inline uint32_t /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__Random__rand32(void );
# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[1000];
uint8_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[1000];
/*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool_t * /*BcpRateControllerC.modPool.PoolP*/PoolP__3__queue[1000][6];
/*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool[1000][6];

static inline error_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Init__init(void );









static inline bool /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__empty(void );
#line 88
static inline /*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool_t */*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__get(void );
#line 103
static error_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__put(/*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool_t *newVal);
# 48 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
/*BcpRateControllerC.modQueue*/QueueC__1__queue_t  /*BcpRateControllerC.modQueue*/QueueC__1__queue[1000][6];
uint8_t /*BcpRateControllerC.modQueue*/QueueC__1__head[1000];
uint8_t /*BcpRateControllerC.modQueue*/QueueC__1__tail[1000];
uint8_t /*BcpRateControllerC.modQueue*/QueueC__1__size[1000];

static inline bool /*BcpRateControllerC.modQueue*/QueueC__1__Queue__empty(void );



static inline uint8_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__size(void );



static inline uint8_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__maxSize(void );



static inline /*BcpRateControllerC.modQueue*/QueueC__1__queue_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__head(void );



static void /*BcpRateControllerC.modQueue*/QueueC__1__printQueue(void );
#line 85
static inline /*BcpRateControllerC.modQueue*/QueueC__1__queue_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__dequeue(void );
#line 97
static inline error_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__enqueue(/*BcpRateControllerC.modQueue*/QueueC__1__queue_t newVal);
# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
static uint32_t /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__subRandom__rand32(void );
# 8 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/exponentialRandomM.nc"
uint32_t /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__mean_m[1000];
#line 21
static inline uint32_t /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__Random__rand32(void );
# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SafeSerialSendM__SerialControl__start(void );
# 73 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
static 
#line 71
SafeSerialSendM__SendQueue__t  

SafeSerialSendM__SendQueue__head(void );
#line 90
static error_t SafeSerialSendM__SendQueue__enqueue(
#line 86
SafeSerialSendM__SendQueue__t  newVal);
#line 65
static uint8_t SafeSerialSendM__SendQueue__maxSize(void );
#line 58
static uint8_t SafeSerialSendM__SendQueue__size(void );
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SafeSerialSendM__sendTask__postTask(void );
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t SafeSerialSendM__UartPacket__payloadLength(
#line 63
message_t * msg);
#line 115
static 
#line 112
void * 


SafeSerialSendM__UartPacket__getPayload(
#line 110
message_t * msg, 




uint8_t len);
#line 83
static void SafeSerialSendM__UartPacket__setPayloadLength(
#line 79
message_t * msg, 



uint8_t len);
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t SafeSerialSendM__UartSend__send(am_addr_t addr, 
#line 60
message_t * msg, 








uint8_t len);
# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
static 
#line 94
SafeSerialSendM__MessagePool__t * 


SafeSerialSendM__MessagePool__get(void );
#line 61
static bool SafeSerialSendM__MessagePool__empty(void );
# 32 "SafeSerialSendM.nc"
enum SafeSerialSendM____nesc_unnamed4361 {
#line 32
  SafeSerialSendM__sendTask = 12U
};
#line 32
typedef int SafeSerialSendM____nesc_sillytask_sendTask[SafeSerialSendM__sendTask];
#line 19
bool SafeSerialSendM__sending_m[1000];





bool SafeSerialSendM__serialRunning_m[1000];




uint8_t SafeSerialSendM__overflowCount_m[1000];

static inline void SafeSerialSendM__sendTask__runTask(void );
#line 78
static inline void SafeSerialSendM__SerialControl__startDone(error_t error);








static inline void SafeSerialSendM__SerialControl__stopDone(error_t error);



static message_t *SafeSerialSendM__SafeSerialSendIF__getMessageBuffer(void );
#line 104
static void *SafeSerialSendM__SafeSerialSendIF__getPayload(message_t *msg_p, uint8_t size_p);








static void SafeSerialSendM__SafeSerialSendIF__queueMessageBuffer(message_t *sendMsg_p);
#line 127
static inline error_t SafeSerialSendM__StdControl__start(void );
# 48 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue_t  /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue[1000][20];
uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__head[1000];
uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__tail[1000];
uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__size[1000];





static inline uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__size(void );



static inline uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__maxSize(void );



static inline /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__head(void );



static inline void /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__printQueue(void );
#line 97
static inline error_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__enqueue(/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue_t newVal);
# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[1000];
uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[1000];
/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool_t * /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__queue[1000][20];
/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool_t /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool[1000][20];

static inline error_t /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Init__init(void );









static inline bool /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Pool__empty(void );
#line 88
static inline /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool_t */*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Pool__get(void );
# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialActiveMessageC__SplitControl__startDone(error_t error);
#line 117
static void SerialActiveMessageC__SplitControl__stopDone(error_t error);
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialActiveMessageC__startDone__postTask(void );
# 59 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
enum SerialActiveMessageC____nesc_unnamed4362 {
#line 59
  SerialActiveMessageC__startDone = 13U
};
#line 59
typedef int SerialActiveMessageC____nesc_sillytask_startDone[SerialActiveMessageC__startDone];
enum SerialActiveMessageC____nesc_unnamed4363 {
#line 60
  SerialActiveMessageC__stopDone = 14U
};
#line 60
typedef int SerialActiveMessageC____nesc_sillytask_stopDone[SerialActiveMessageC__stopDone];
#line 55
static inline serial_header_t *SerialActiveMessageC__getHeader(message_t *amsg);



static inline void SerialActiveMessageC__startDone__runTask(void );
static inline void SerialActiveMessageC__stopDone__runTask(void );

static inline error_t SerialActiveMessageC__SplitControl__start(void );









static inline error_t SerialActiveMessageC__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 146
static inline uint8_t SerialActiveMessageC__Packet__payloadLength(message_t *msg);



static inline void SerialActiveMessageC__Packet__setPayloadLength(message_t *msg, uint8_t len);







static inline void *SerialActiveMessageC__Packet__getPayload(message_t *msg, uint8_t len);
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 67
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 119
static inline void expand_heap(heap_t *heap)
#line 119
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 133
{
  int findex = heap->size;

#line 135
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 77
static inline int is_empty(heap_t *heap)
#line 77
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 81
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 85
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 309 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 309
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 298
inline static unsigned int sim_log_hash(void *key)
#line 298
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 151
static inline void sim_log_init()
#line 151
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 132 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 132
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 136
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 142
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 109 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP__SimMote__isOn(void )
#line 109
{
  return SimMoteP__isOn[sim_node()];
}

# 164 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 164
{
  sim_log_channel_t *channel;

#line 166
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 172
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 204
{
  sim_log_channel_t *channel;
  int i;

#line 207
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 216
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 291 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 291
{
  dummy = 5;
}

# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 42
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 87 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
static inline void CC2420CsmaP__active_message_deliver_handle(sim_event_t *evt)
{
  message_t *m = (message_t *)evt->data;

#line 90
  sim_log_debug(134U, "Packet", "Packet: Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  CC2420CsmaP__Model__receive(m);
}

static inline sim_event_t *CC2420CsmaP__allocate_deliver_event(int node, message_t *msg, sim_time_t t)
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 97
  evt->mote = node;
  evt->time = t;
  evt->handle = CC2420CsmaP__active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 58 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static inline tossim_header_t *TossimActiveMessageP__getHeader(message_t *amsg)
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 130
static inline uint8_t TossimActiveMessageP__Packet__payloadLength(message_t *msg)
#line 130
{
#line 130
  return __nesc_ntoh_uint8(TossimActiveMessageP__getHeader(msg)->length.data);
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t CC2420CsmaP__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageP__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 134 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static inline void *TossimActiveMessageP__Packet__getPayload(message_t *msg, uint8_t len)
{
  return msg->data;
}

# 115 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * CC2420CsmaP__Packet__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = TossimActiveMessageP__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 77 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t CC2420CsmaP__AMPacket__source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = TossimActiveMessageP__AMPacket__source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t BcpForwardingEngineP__snoopHandlerTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(BcpForwardingEngineP__snoopHandlerTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 11 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
inline static void BcpForwardingEngineP__BcpDebugIF__reportError(uint8_t type_p){
#line 11
  BcpCollectionExampleC__BcpDebugIF__reportError(type_p);
#line 11
}
#line 11
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t BcpForwardingEngineP__MessagePool__put(BcpForwardingEngineP__MessagePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 61 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*BcpC.SnoopQueue*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 5;
}

#line 57
static inline uint8_t /*BcpC.SnoopQueue*/QueueC__0__Queue__size(void )
#line 57
{
  return /*BcpC.SnoopQueue*/QueueC__0__size[sim_node()];
}

#line 97
static inline error_t /*BcpC.SnoopQueue*/QueueC__0__Queue__enqueue(/*BcpC.SnoopQueue*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*BcpC.SnoopQueue*/QueueC__0__Queue__size() < /*BcpC.SnoopQueue*/QueueC__0__Queue__maxSize()) {
      sim_log_debug(281U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*BcpC.SnoopQueue*/QueueC__0__size[sim_node()]);
      /*BcpC.SnoopQueue*/QueueC__0__queue[sim_node()][/*BcpC.SnoopQueue*/QueueC__0__tail[sim_node()]] = newVal;
      /*BcpC.SnoopQueue*/QueueC__0__tail[sim_node()]++;
      if (/*BcpC.SnoopQueue*/QueueC__0__tail[sim_node()] == 5) {
#line 102
        /*BcpC.SnoopQueue*/QueueC__0__tail[sim_node()] = 0;
        }
#line 103
      /*BcpC.SnoopQueue*/QueueC__0__size[sim_node()]++;
      /*BcpC.SnoopQueue*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t BcpForwardingEngineP__SnoopQueue__enqueue(BcpForwardingEngineP__SnoopQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*BcpC.SnoopQueue*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static BcpForwardingEngineP__MessagePool__t * BcpForwardingEngineP__MessagePool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 61
inline static bool BcpForwardingEngineP__MessagePool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 65 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static uint8_t BcpForwardingEngineP__SnoopQueue__maxSize(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*BcpC.SnoopQueue*/QueueC__0__Queue__maxSize();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
#line 58
inline static uint8_t BcpForwardingEngineP__SnoopQueue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*BcpC.SnoopQueue*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 132 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static inline uint8_t TossimActiveMessageP__Packet__maxPayloadLength(void )
#line 132
{
#line 132
  return 28;
}

#line 80
static inline uint8_t TossimActiveMessageP__AMSend__maxPayloadLength(am_id_t id)
#line 80
{
#line 80
  return TossimActiveMessageP__Packet__maxPayloadLength();
}

# 112 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(am_id_t arg_0x40f1a908){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = TossimActiveMessageP__AMSend__maxPayloadLength(arg_0x40f1a908);
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 199 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(uint8_t id)
#line 199
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(0);
}

# 101 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(0U);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 61 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void )
#line 61
{
  return /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength();
}

# 112 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t BcpForwardingEngineP__SubSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 1244 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline message_t *BcpForwardingEngineP__SubSnoop__receive(message_t *msg, void *payload, uint8_t len)
{
  message_t *newMsg;

#line 1247
  if (len > BcpForwardingEngineP__SubSend__maxPayloadLength()) {
      sim_log_debug(247U, "ERROR", "%s: snoop len > maxPayloadLength()!\n", __FUNCTION__);
      BcpForwardingEngineP__BcpDebugIF__reportError(0x36);
      return msg;
    }



  if (BcpForwardingEngineP__SnoopQueue__size() == BcpForwardingEngineP__SnoopQueue__maxSize()) 
    {

      return msg;
    }
  else {
#line 1260
    if (BcpForwardingEngineP__MessagePool__empty()) 
      {

        return msg;
      }
    }
  newMsg = BcpForwardingEngineP__MessagePool__get();
  if (newMsg == (void *)0) 
    {


      BcpForwardingEngineP__BcpDebugIF__reportError(0xdb);
      return msg;
    }

  if (BcpForwardingEngineP__SnoopQueue__enqueue(msg) != SUCCESS) 
    {

      BcpForwardingEngineP__MessagePool__put(newMsg);
      BcpForwardingEngineP__BcpDebugIF__reportError(0x57);
      return msg;
    }

  BcpForwardingEngineP__snoopHandlerTask__postTask();

  return newMsg;
}

# 154 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static inline message_t *TossimActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 154
{
#line 154
  return msg;
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageP__Snoop__receive(am_id_t arg_0x4097ab00, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x4097ab00) {
#line 67
    case 145:
#line 67
      __nesc_result = BcpForwardingEngineP__SubSnoop__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = TossimActiveMessageP__Snoop__default__receive(arg_0x4097ab00, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 240 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

#line 294
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t BcpForwardingEngineP__QEntryPool__put(BcpForwardingEngineP__QEntryPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/StackC.nc"
static inline uint8_t /*BcpC.SendStack*/StackC__0__Stack__size(void )
#line 60
{
  return /*BcpC.SendStack*/StackC__0__size[sim_node()];
}

# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/Stack.nc"
inline static uint8_t BcpForwardingEngineP__SendStack__size(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = /*BcpC.SendStack*/StackC__0__Stack__size();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 6 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
inline static void BcpForwardingEngineP__BcpDebugIF__reportBackpressure(uint32_t dataQueueSize_p, uint32_t virtualQueueSize_p, uint16_t localTXCount_p, uint8_t origin_p, uint8_t originSeqNo_p, uint8_t reportSource_p){
#line 6
  BcpCollectionExampleC__BcpDebugIF__reportBackpressure(dataQueueSize_p, virtualQueueSize_p, localTXCount_p, origin_p, originSeqNo_p, reportSource_p);
#line 6
}
#line 6
# 108 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/Stack.nc"
inline static error_t BcpForwardingEngineP__SendStack__pushTop(BcpForwardingEngineP__SendStack__t  newVal){
#line 108
  unsigned char __nesc_result;
#line 108

#line 108
  __nesc_result = /*BcpC.SendStack*/StackC__0__Stack__pushTop(newVal);
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 4 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpCongestionIF.nc"
inline static void BcpForwardingEngineP__BcpCongestionIF__updateRateControlInfo(uint16_t reVal, uint16_t seqNo){
#line 4
  BcpRateControllerP__BcpCongestionIF__updateRateControlInfo(reVal, seqNo);
#line 4
}
#line 4
# 115 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * BcpForwardingEngineP__SubPacket__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = TossimActiveMessageP__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 145 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline bcp_data_header_t *BcpForwardingEngineP__getHeader(message_t *m)
#line 145
{
  return (bcp_data_header_t *)BcpForwardingEngineP__SubPacket__getPayload(m, sizeof(bcp_data_header_t ));
}

# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static BcpForwardingEngineP__QEntryPool__t * BcpForwardingEngineP__QEntryPool__get(void ){
#line 97
  struct __nesc_unnamed4308 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 61
inline static bool BcpForwardingEngineP__QEntryPool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 605 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline message_t * BcpForwardingEngineP__forward(message_t * m, uint32_t arrivalTime_p)
#line 605
{
  message_t *newMsg;
  fe_queue_entry_t *qe;
  bcp_data_header_t *hdr;
  error_t retVal;



  BcpForwardingEngineP__conditionalFQDiscard();

  if (BcpForwardingEngineP__MessagePool__empty()) {
      sim_log_debug(211U, "WARNING", "%s cannot forward, message pool empty.\n", __FUNCTION__);
      BcpForwardingEngineP__BcpDebugIF__reportError(0x70);
      return m;
    }
  else {
#line 620
    if (BcpForwardingEngineP__QEntryPool__empty()) {
        sim_log_debug(212U, "WARNING", "%s cannot forward, queue entry pool empty.\n", __FUNCTION__);

        BcpForwardingEngineP__BcpDebugIF__reportError(0x71);
        return m;
      }
    }
  qe = BcpForwardingEngineP__QEntryPool__get();
  if (qe == (void *)0) {
      sim_log_debug(213U, "ERROR", "%s cannot forward, QEntryPool.get() error.", __FUNCTION__);
      BcpForwardingEngineP__BcpDebugIF__reportError(0x72);
      return m;
    }

  newMsg = BcpForwardingEngineP__MessagePool__get();
  if (newMsg == (void *)0) {
      sim_log_debug(214U, "ERROR", "%s cannot forward, MessagePool.get() error.", __FUNCTION__);
      BcpForwardingEngineP__BcpDebugIF__reportError(0x73);

      if (BcpForwardingEngineP__QEntryPool__put(qe) != SUCCESS) {
          BcpForwardingEngineP__BcpDebugIF__reportError(0x74);
          sim_log_debug(215U, "ERROR", "%s memory leak, QEntryPool.put() error.", __FUNCTION__);
        }
      return m;
    }

  memset(newMsg, 0, sizeof(message_t ));
  memset(m->metadata, 0, sizeof(message_metadata_t ));

  hdr = BcpForwardingEngineP__getHeader(m);

  qe->msg = m;
  qe->source = FORWARD;
  qe->arrivalTime = arrivalTime_p;
  qe->txCount = 0;
  qe->firstTxTime = 0;
  qe->bcpArrivalDelay = __nesc_ntoh_uint32(hdr->bcpDelay.data);
  BcpForwardingEngineP__BcpCongestionIF__updateRateControlInfo(__nesc_ntoh_uint8(hdr->valphaUpper.data), __nesc_ntoh_uint8(
  hdr->valphaSeqNo.data));

  retVal = BcpForwardingEngineP__SendStack__pushTop(qe);






  if (retVal == SUCCESS) {
      BcpForwardingEngineP__BcpDebugIF__reportBackpressure(BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()], BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()] + BcpForwardingEngineP__virtualQueueSize[sim_node()], BcpForwardingEngineP__localTXCount[sim_node()], __nesc_ntoh_uint16(hdr->origin.data), __nesc_ntoh_uint8(hdr->originSeqNo.data), 3);
      sim_log_debug(216U, "Forwarder", "%s forwarding packet %p with queue size %hhu\n", __FUNCTION__, m, BcpForwardingEngineP__SendStack__size());

      BcpForwardingEngineP__forwarderActivity();


      return newMsg;
    }
  else 
#line 675
    {
      BcpForwardingEngineP__BcpDebugIF__reportError(0x49);


      if (BcpForwardingEngineP__MessagePool__put(newMsg) != SUCCESS) {
          BcpForwardingEngineP__BcpDebugIF__reportError(0x75);
          sim_log_debug(217U, "ERROR", "%s Memory leak, MessagePool.put() error.", __FUNCTION__);
        }
      if (BcpForwardingEngineP__QEntryPool__put(qe) != SUCCESS) {
          BcpForwardingEngineP__BcpDebugIF__reportError(0x76);
          sim_log_debug(218U, "ERROR", "%s memory leak, QEntryPool.put() error.", __FUNCTION__);
        }
    }


  sim_log_debug(219U, "ERROR", "%s cannot forward, resource acquisition problem.", __FUNCTION__);
  return m;
}

#line 979
static inline uint8_t BcpForwardingEngineP__Packet__payloadLength(message_t *msg)
#line 979
{
  return BcpForwardingEngineP__SubPacket__payloadLength(msg) - (uint8_t )sizeof(bcp_data_header_t );
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * BcpForwardingEngineP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = BcpCollectionExampleC__Receive__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 376 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static inline bool BcpRoutingEngineP__RootControl__isRoot(void )
#line 376
{
  return BcpRoutingEngineP__state_is_root[sim_node()];
}

# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/RootControl.nc"
inline static bool BcpForwardingEngineP__RootControl__isRoot(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = BcpRoutingEngineP__RootControl__isRoot();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 304 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static inline void BcpRoutingEngineP__RouterForwarderIF__updateNeighborBackpressure(am_addr_t neighbor_p, uint16_t rcvBackpressure_p)
{



  BcpRoutingEngineP__routingTableUpdateEntry(neighbor_p, rcvBackpressure_p);
}

# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
inline static void BcpForwardingEngineP__RouterForwarderIF__updateNeighborBackpressure(am_addr_t neighbor_p, uint16_t rcvBackpressure_p){
#line 45
  BcpRoutingEngineP__RouterForwarderIF__updateNeighborBackpressure(neighbor_p, rcvBackpressure_p);
#line 45
}
#line 45
# 23 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
inline static void BcpForwardingEngineP__BcpDebugIF__reportValues(uint32_t field1_p, uint32_t field2_p, uint32_t field3_p, uint16_t field4_p, uint16_t field5_p, uint16_t field6_p, uint8_t field7_p, uint8_t field8_p){
#line 23
  BcpCollectionExampleC__BcpDebugIF__reportValues(field1_p, field2_p, field3_p, field4_p, field5_p, field6_p, field7_p, field8_p);
#line 23
}
#line 23
# 77 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t BcpForwardingEngineP__AMDataPacket__source(message_t * amsg){
#line 77
  unsigned short __nesc_result;
#line 77

#line 77
  __nesc_result = TossimActiveMessageP__AMPacket__source(amsg);
#line 77

#line 77
  return __nesc_result;
#line 77
}
#line 77
# 222 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 98 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 98
  unsigned int __nesc_result;
#line 98

#line 98
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 85 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 125 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 125
  unsigned int __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 178 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 125 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t BcpForwardingEngineP__DelayPacketTimer__getNow(void ){
#line 125
  unsigned int __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(2U);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 869 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline message_t *BcpForwardingEngineP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  unsigned char __nesc_temp45;
  unsigned char *__nesc_temp44;
#line 871
  am_addr_t from;
  bcp_data_header_t *rcvPacket;
  uint32_t checksum = 0;
  latestForwarded_table_entry *latestForwardedEntry;
  uint32_t arrivalTime = BcpForwardingEngineP__DelayPacketTimer__getNow();

  uint8_t i = 0;






  if (len > BcpForwardingEngineP__SubSend__maxPayloadLength()) {
      sim_log_debug(231U, "ERROR", "%s: len > maxPayloadLength()!\n", __FUNCTION__);
      BcpForwardingEngineP__BcpDebugIF__reportError(0x50);
      return msg;
    }


  from = BcpForwardingEngineP__AMDataPacket__source(msg);

  rcvPacket = (bcp_data_header_t *)payload;


  checksum = BcpForwardingEngineP__calcHdrChecksum(msg);

  if (checksum != __nesc_ntoh_uint16(rcvPacket->hdrChecksum.data)) 
    {



      BcpForwardingEngineP__dataCRCFailCount[sim_node()]++;
      BcpForwardingEngineP__BcpDebugIF__reportValues(BcpForwardingEngineP__snoopCRCFailCount[sim_node()], BcpForwardingEngineP__snoopCRCSuccessCount[sim_node()], BcpForwardingEngineP__dataCRCFailCount[sim_node()], BcpForwardingEngineP__dataCRCSuccessCount[sim_node()], 0, 0, 0, 0x90);

      return msg;
    }
  else 
#line 907
    {
      BcpForwardingEngineP__dataCRCSuccessCount[sim_node()]++;


      latestForwardedEntry = BcpForwardingEngineP__latestForwardedTableFind(from);

      if (latestForwardedEntry == (void *)0) 
        {

          BcpForwardingEngineP__latestForwardedTableUpdate(from, __nesc_ntoh_uint16(rcvPacket->origin.data), __nesc_ntoh_uint8(
          rcvPacket->originSeqNo.data), __nesc_ntoh_uint8(rcvPacket->hopCount.data));
        }
      else {
        if (
#line 919
        latestForwardedEntry->origin == __nesc_ntoh_uint16(rcvPacket->origin.data) && 
        latestForwardedEntry->originSeqNo == __nesc_ntoh_uint8(rcvPacket->originSeqNo.data) && 
        latestForwardedEntry->hopCount == __nesc_ntoh_uint8(rcvPacket->hopCount.data)) 
          {







            sim_log_debug(232U, "Duplicates", "%s: detected a duplicate data packet, discarding silently <%hhu,%u,%u>.\n", __FUNCTION__, __nesc_ntoh_uint16(rcvPacket->origin.data), __nesc_ntoh_uint8(rcvPacket->originSeqNo.data), __nesc_ntoh_uint8(rcvPacket->hopCount.data));

            BcpForwardingEngineP__BcpDebugIF__reportValues(0, 0, 0, 0, 0, 0, 0, 0x83);
            return msg;
          }
        else 
          {

            BcpForwardingEngineP__latestForwardedTableUpdate(from, __nesc_ntoh_uint16(rcvPacket->origin.data), __nesc_ntoh_uint8(
            rcvPacket->originSeqNo.data), __nesc_ntoh_uint8(rcvPacket->hopCount.data));
          }
        }

      BcpForwardingEngineP__RouterForwarderIF__updateNeighborBackpressure(from, __nesc_ntoh_uint16(rcvPacket->bcpBackpressure.data));
    }


  (__nesc_temp44 = rcvPacket->hopCount.data, __nesc_hton_uint8(__nesc_temp44, (__nesc_temp45 = __nesc_ntoh_uint8(__nesc_temp44)) + 1), __nesc_temp45);
  sim_log_debug(233U, "Forwarder", "%s: My NODE_ID is %hhu, I'm Root:%hhu:\n", __FUNCTION__, TOS_NODE_ID, BcpForwardingEngineP__RootControl__isRoot());

  if (BcpForwardingEngineP__RootControl__isRoot()) {


      if (BcpForwardingEngineP__congestNodeCount[sim_node()] < CONGESTION_COUNT && __nesc_ntoh_uint16(
      rcvPacket->txCount.data) / __nesc_ntoh_uint8(rcvPacket->hopCount.data) >= CONGEST_HOP_TX) {
          for (i = 0; i < BcpForwardingEngineP__congestNodeCount[sim_node()]; i++) {
              if (BcpForwardingEngineP__congestNodeId[sim_node()][i] == __nesc_ntoh_uint16(rcvPacket->origin.data)) {
                break;
                }
            }
#line 959
          if (i >= BcpForwardingEngineP__congestNodeCount[sim_node()] && 
          BcpForwardingEngineP__congestNodeCount[sim_node()] < CONGESTION_COUNT) {
              BcpForwardingEngineP__congestNodeId[sim_node()][BcpForwardingEngineP__congestNodeCount[sim_node()]] = __nesc_ntoh_uint16(rcvPacket->origin.data);
              BcpForwardingEngineP__congestNodeCount[sim_node()]++;
            }
        }
      return BcpForwardingEngineP__Receive__receive(msg, 
      BcpForwardingEngineP__Packet__getPayload(msg, BcpForwardingEngineP__Packet__payloadLength(msg)), 
      BcpForwardingEngineP__Packet__payloadLength(msg));
    }
  else 
#line 968
    {
      sim_log_debug(234U, "Forwarder", "Forwarding packet from %hu.\n", __nesc_ntoh_uint16(BcpForwardingEngineP__getHeader(msg)->origin.data));
      return BcpForwardingEngineP__forward(msg, arrivalTime);
    }
  return msg;
}

#line 1183
static inline message_t *BcpForwardingEngineP__BeaconReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  am_addr_t from;
  bcp_beacon_header_t *rcvBeacon;




  if (len != sizeof(bcp_beacon_header_t )) 
    {
      sim_log_debug(245U, "Beacon", "%s, received beacon of size %hhu, expected %i\n", __FUNCTION__, len, (int )sizeof(bcp_beacon_header_t ));




      return msg;
    }

  from = BcpForwardingEngineP__AMDataPacket__source(msg);

  rcvBeacon = (bcp_beacon_header_t *)payload;

  sim_log_debug(246U, "Beacon", "%s: Received a beacon from neighbor %hhu, backpressure %u\n", __FUNCTION__, from, __nesc_ntoh_uint16(rcvBeacon->bcpBackpressure.data));


  BcpForwardingEngineP__RouterForwarderIF__updateNeighborBackpressure(from, __nesc_ntoh_uint16(rcvBeacon->bcpBackpressure.data));
  BcpForwardingEngineP__BcpCongestionIF__updateRateControlInfo(__nesc_ntoh_uint8(rcvBeacon->valphaUpper.data), __nesc_ntoh_uint8(
  rcvBeacon->valphaSeqNo.data));





  return msg;
}

# 153 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static inline message_t *TossimActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 153
{
#line 153
  return msg;
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageP__Receive__receive(am_id_t arg_0x4097a468, message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  switch (arg_0x4097a468) {
#line 67
    case 144:
#line 67
      __nesc_result = BcpForwardingEngineP__BeaconReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    case 145:
#line 67
      __nesc_result = BcpForwardingEngineP__SubReceive__receive(msg, payload, len);
#line 67
      break;
#line 67
    default:
#line 67
      __nesc_result = TossimActiveMessageP__Receive__default__receive(arg_0x4097a468, msg, payload, len);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 50 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
inline static am_addr_t TossimActiveMessageP__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
#line 83
static inline am_addr_t TossimActiveMessageP__AMPacket__address(void )
#line 83
{
#line 83
  return TossimActiveMessageP__amAddress();
}

#line 109
static inline bool TossimActiveMessageP__AMPacket__isForMe(message_t *amsg)
{
  sim_log_debug(146U, "AM", "AM: isForMe: %d %d\n", TossimActiveMessageP__AMPacket__destination(amsg), TossimActiveMessageP__AMPacket__address());
  return TossimActiveMessageP__AMPacket__destination(amsg) == TossimActiveMessageP__AMPacket__address() || 
  TossimActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

#line 160
static inline message_t *TossimActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  if (TossimActiveMessageP__AMPacket__isForMe(msg)) {
      sim_log_debug(147U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", msg, TossimActiveMessageP__AMPacket__type(msg), len, sim_time_string());

      return TossimActiveMessageP__Receive__receive(TossimActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
  else 
#line 166
    {
      sim_log_debug(148U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageP__AMPacket__type(msg), len, TossimActiveMessageP__AMPacket__destination(msg), sim_time_string());

      return TossimActiveMessageP__Snoop__receive(TossimActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageP__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 141 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn)
#line 141
{
  uint8_t element = UniqueReceiveP__recycleSourceElement[sim_node()];
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    {
      if (element == UniqueReceiveP__INVALID_ELEMENT || UniqueReceiveP__writeIndex[sim_node()] == element) {

          element = UniqueReceiveP__writeIndex[sim_node()];
          increment = TRUE;
        }

      UniqueReceiveP__receivedMessages[sim_node()][element].source = msgSource;
      UniqueReceiveP__receivedMessages[sim_node()][element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP__writeIndex[sim_node()]++;
          UniqueReceiveP__writeIndex[sim_node()] %= 4;
        }
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
}


static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len)
#line 162
{
  return msg;
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * UniqueReceiveP__DuplicateReceive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = UniqueReceiveP__DuplicateReceive__default__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 115 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 115
{
  int i;

#line 117
  UniqueReceiveP__recycleSourceElement[sim_node()] = UniqueReceiveP__INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP__receivedMessages[sim_node()][i].source == msgSource) {
              if (UniqueReceiveP__receivedMessages[sim_node()][i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 124
                    TRUE;

                    {
#line 124
                      __nesc_atomic_end(__nesc_atomic); 
#line 124
                      return __nesc_temp;
                    }
                  }
                }
#line 127
              UniqueReceiveP__recycleSourceElement[sim_node()] = i;
            }
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 70 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/packet/sim/CC2420PacketP.nc"
static inline tossim_header_t *CC2420PacketP__CC2420PacketBody__getHeader(message_t *msg)
#line 70
{
  return (tossim_header_t *)msg->header;
}

# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/sim/CC2420PacketBody.nc"
inline static tossim_header_t *UniqueReceiveP__CC2420PacketBody__getHeader(message_t *msg){
#line 42
  nx_struct tossim_header *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 85 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
#line 86
{
  uint16_t msgSource = __nesc_ntoh_uint16(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->src.data);
  uint8_t msgDsn = __nesc_ntoh_uint8(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->dsn.data);

  if (UniqueReceiveP__hasSeen(msgSource, msgDsn)) {
      sim_log_debug(194U, "UniqueReceive", "UniqueReceive: SubReceive.receive: drop %p from %d with dsn %d\n", msg, msgSource, msgDsn);

      return UniqueReceiveP__DuplicateReceive__receive(msg, payload, len);
    }
  else {
      sim_log_debug(195U, "UniqueReceive", "UniqueReceive: SubReceive.receive: insert %p from %d with dsn %d\n", msg, msgSource, msgDsn);

      UniqueReceiveP__insert(msgSource, msgDsn);
      return UniqueReceiveP__Receive__receive(msg, payload, len);
    }
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * CC2420CsmaP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 67
  nx_struct message_t *__nesc_result;
#line 67

#line 67
  __nesc_result = UniqueReceiveP__SubReceive__receive(msg, payload, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 106 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP__SimMote__getStartTime(void )
#line 106
{
  return SimMoteP__startTime[sim_node()];
}

# 119 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP__notify_clockTicksPerSec(void )
#line 119
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 146
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t)
#line 146
{
  t *= HplAtm128Timer0AsyncP__notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 44 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 44
  union __nesc_unnamed4323 __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 75 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline bool /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Pool__empty(void )
#line 75
{
  sim_log_debug(349U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[sim_node()]);
  return /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[sim_node()] == 0;
}

# 61 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static bool SafeSerialSendM__MessagePool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 88 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool_t */*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Pool__get(void )
#line 88
{
  if (/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[sim_node()]) {
      /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool_t *rval = /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__queue[sim_node()][/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[sim_node()]];

#line 91
      /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__queue[sim_node()][/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[sim_node()]] = (void *)0;
      /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[sim_node()]--;
      /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[sim_node()]++;
      if (/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[sim_node()] == 20) {
          /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[sim_node()] = 0;
        }
      sim_log_debug(351U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static SafeSerialSendM__MessagePool__t * SafeSerialSendM__MessagePool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 55 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline serial_header_t *SerialActiveMessageC__getHeader(message_t *amsg)
#line 55
{
  return (serial_header_t *)(amsg->data - sizeof(serial_header_t ));
}

#line 150
static inline void SerialActiveMessageC__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 150
{
  __nesc_hton_uint8(SerialActiveMessageC__getHeader(msg)->length.data, len);
}

# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void SafeSerialSendM__UartPacket__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  SerialActiveMessageC__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 158 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline void *SerialActiveMessageC__Packet__getPayload(message_t *msg, uint8_t len)
#line 158
{
  if (len <= 28) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

# 115 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void * SafeSerialSendM__UartPacket__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = SerialActiveMessageC__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 61 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__maxSize(void )
#line 61
{
  return 20;
}

# 65 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static uint8_t SafeSerialSendM__SendQueue__maxSize(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__maxSize();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 57 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__size(void )
#line 57
{
  return /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__size[sim_node()];
}

# 58 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static uint8_t SafeSerialSendM__SendQueue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline void /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(342U, "QueueC", "head <-");
  for (i = /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__head[sim_node()]; i < /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__head[sim_node()] + /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__size[sim_node()]; i++) {
      sim_log_debug_clear(343U, "QueueC", "[");
      for (j = 0; j < sizeof(/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue[sim_node()][i % 20])[j];

#line 77
          sim_log_debug_clear(344U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(345U, "QueueC", "] ");
    }
  sim_log_debug_clear(346U, "QueueC", "<- tail\n");
}

#line 97
static inline error_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__enqueue(/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue_t newVal)
#line 97
{
  if (/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__size() < /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__maxSize()) {
      sim_log_debug(348U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__size[sim_node()]);
      /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue[sim_node()][/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__tail[sim_node()]] = newVal;
      /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__tail[sim_node()]++;
      if (/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__tail[sim_node()] == 20) {
#line 102
        /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__tail[sim_node()] = 0;
        }
#line 103
      /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__size[sim_node()]++;
      /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t SafeSerialSendM__SendQueue__enqueue(SafeSerialSendM__SendQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SafeSerialSendM__sendTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(SafeSerialSendM__sendTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 131 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id)
{
  return SimSchedulerBasicP__m_next[sim_node()][id] != SimSchedulerBasicP__NO_TASK || SimSchedulerBasicP__m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP__pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP__isWaiting(id)) 
    {
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_head[sim_node()] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_tail[sim_node()]] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 61
static inline int SimSchedulerBasicP__sim_config_task_latency(void )
#line 61
{
#line 61
  return 100;
}

# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpPacket.nc"
inline static am_addr_t BcpCollectionExampleC__BcpPacket__getOrigin(message_t *msg){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = BcpForwardingEngineP__BcpPacket__getOrigin(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43







inline static uint32_t BcpCollectionExampleC__BcpPacket__getDelay(message_t *msg){
#line 50
  unsigned int __nesc_result;
#line 50

#line 50
  __nesc_result = BcpForwardingEngineP__BcpPacket__getDelay(msg);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50








inline static uint8_t BcpCollectionExampleC__BcpPacket__getHopCount(message_t *msg){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = BcpForwardingEngineP__BcpPacket__getHopCount(msg);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
#line 51
inline static uint16_t BcpCollectionExampleC__BcpPacket__getTxCount(message_t *msg){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = BcpForwardingEngineP__BcpPacket__getTxCount(msg);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 1155 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline uint8_t BcpForwardingEngineP__BcpPacket__getBCPPktType(message_t *msg)
#line 1155
{
#line 1155
  return __nesc_ntoh_uint8(BcpForwardingEngineP__getHeader(msg)->pktType.data);
}

# 59 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpPacket.nc"
inline static uint8_t BcpCollectionExampleC__BcpPacket__getBCPPktType(message_t *msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = BcpForwardingEngineP__BcpPacket__getBCPPktType(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 84 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline uint8_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__maxSize(void )
#line 84
{
  return 12;
}

# 80 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static uint8_t BcpForwardingEngineP__QEntryPool__maxSize(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__maxSize();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/StackC.nc"
static inline uint8_t /*BcpC.SendStack*/StackC__0__Stack__maxSize(void )
#line 64
{
  return 11;
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/Stack.nc"
inline static uint8_t BcpForwardingEngineP__SendStack__maxSize(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = /*BcpC.SendStack*/StackC__0__Stack__maxSize();
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/StackC.nc"
static inline bool /*BcpC.SendStack*/StackC__0__Stack__empty(void )
#line 56
{
  return /*BcpC.SendStack*/StackC__0__size[sim_node()] == 0;
}

#line 90
static inline /*BcpC.SendStack*/StackC__0__stack_t /*BcpC.SendStack*/StackC__0__Stack__bottom(void )
#line 90
{
  return /*BcpC.SendStack*/StackC__0__stack[sim_node()][/*BcpC.SendStack*/StackC__0__bottom[sim_node()]];
}

static inline /*BcpC.SendStack*/StackC__0__stack_t /*BcpC.SendStack*/StackC__0__Stack__popBottom(void )
#line 94
{
  /*BcpC.SendStack*/StackC__0__stack_t t = /*BcpC.SendStack*/StackC__0__Stack__bottom();

#line 96
  sim_log_debug(272U, "StackC", "%s: size is %hhu\n", __FUNCTION__, /*BcpC.SendStack*/StackC__0__size[sim_node()]);

  if (/*BcpC.SendStack*/StackC__0__Stack__empty()) {
    return t;
    }
  if (/*BcpC.SendStack*/StackC__0__size[sim_node()] > 1) {
      if (/*BcpC.SendStack*/StackC__0__bottom[sim_node()] == 11 - 1) {
        /*BcpC.SendStack*/StackC__0__bottom[sim_node()] = 0;
        }
      else {
#line 105
        /*BcpC.SendStack*/StackC__0__bottom[sim_node()]++;
        }
    }
  /*BcpC.SendStack*/StackC__0__size[sim_node()]--;
  return t;
}

# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/Stack.nc"
inline static BcpForwardingEngineP__SendStack__t  BcpForwardingEngineP__SendStack__popBottom(void ){
#line 99
  struct __nesc_unnamed4308 *__nesc_result;
#line 99

#line 99
  __nesc_result = /*BcpC.SendStack*/StackC__0__Stack__popBottom();
#line 99

#line 99
  return __nesc_result;
#line 99
}
#line 99
# 158 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num].isrunning;
}

# 81 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool BcpForwardingEngineP__BeaconTimer__isRunning(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(0U);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 62
inline static void BcpForwardingEngineP__BeaconTimer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 62
}
#line 62
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 153 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num].isrunning = FALSE;
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void BcpForwardingEngineP__BeaconTimer__stop(void ){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 67
}
#line 67
# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 83
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 91
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 95
  __nesc_disable_interrupt();
  return result;
}



#line 100
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 77 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e)
#line 77
{
  SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP__Scheduler__runNextTask()) {
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e)
#line 95
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP__sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 158
static inline void SimSchedulerBasicP__Scheduler__init(void )
{
  sim_log_debug(119U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP__m_next[sim_node()], SimSchedulerBasicP__NO_TASK, sizeof SimSchedulerBasicP__m_next[sim_node()]);
    SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__NO_TASK;
    SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;

    SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP__sim_scheduler_event_init(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
  }
}

# 46 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void SimMainP__Scheduler__init(void ){
#line 46
  SimSchedulerBasicP__Scheduler__init();
#line 46
}
#line 46
# 112 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP__popTask(void )
{
  if (SimSchedulerBasicP__m_head[sim_node()] != SimSchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP__m_head[sim_node()];

#line 117
      SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_head[sim_node()]];
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;
        }
      SimSchedulerBasicP__m_next[sim_node()][id] = SimSchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP__NO_TASK;
    }
}

# 113 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
static inline void CC2420CsmaP__CC2420Config__syncDone(error_t error)
#line 113
{
}

# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
#line 53
  CC2420CsmaP__CC2420Config__syncDone(error);
#line 53
}
#line 53
# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
static inline void CC2420ControlP__syncDoneTask__runTask(void )
{
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

# 519 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 519
{
}

# 63 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Read.nc"
inline static void CpmModelC__ReadRssi__readDone(error_t result, CpmModelC__ReadRssi__val_t val){
#line 63
  CpmModelC__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 499 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__read_rssi_task__runTask(void )
{
  double noise = CpmModelC__packetNoise((void *)0);

#line 502
  CpmModelC__rssi[sim_node()] = FALSE;
  sim_log_debug(178U, "CpmModelC", "ReadRssi: noise %f\n", noise);


  CpmModelC__ReadRssi__readDone(SUCCESS, noise + 45);
}

# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get(void )
#line 45
{
#line 45
  return (atm128RegFile[sim_node()][27U] & (1 << 2)) != 0;
}

# 32 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led0__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 46 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 46
{
  sim_log_debug(72U, "Pins", "Setting bit %i of port %i.\n", (int )2, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 2;
}

# 29 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 29
}
#line 29
# 68 "/home/xinchaol/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 68
{
  LedsP__Led0__set();
  sim_log_debug(137U, "LedsC", "LEDS: Led""0"" %s.\n", LedsP__Led0__get() ? "off" : "on");
#line 70
  ;
}

# 50 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void BcpCollectionExampleC__Leds__led0Off(void ){
#line 50
  LedsP__Leds__led0Off();
#line 50
}
#line 50
#line 66
inline static void BcpCollectionExampleC__Leds__led1Off(void ){
#line 66
  LedsP__Leds__led1Off();
#line 66
}
#line 66
#line 83
inline static void BcpCollectionExampleC__Leds__led2Off(void ){
#line 83
  LedsP__Leds__led2Off();
#line 83
}
#line 83
# 62 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void BcpCollectionExampleC__Timer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 62
}
#line 62
# 50 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 50
{
#line 50
  atm128RegFile[sim_node()][27U] &= ~(1 << 2);
}

# 30 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 30
}
#line 30
# 63 "/home/xinchaol/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 63
{
  LedsP__Led0__clr();
  sim_log_debug(136U, "LedsC", "LEDS: Led""0"" %s.\n", LedsP__Led0__get() ? "off" : "on");
#line 65
  ;
}

# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void BcpCollectionExampleC__Leds__led0On(void ){
#line 45
  LedsP__Leds__led0On();
#line 45
}
#line 45
# 58 "/home/xinchaol/local/src/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void BcpForwardingEngineP__BeaconTimer__startPeriodic(uint32_t dt){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 53
}
#line 53
# 694 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline error_t BcpForwardingEngineP__StdControl__start(void )
{
  BcpForwardingEngineP__running[sim_node()] = TRUE;


  BcpForwardingEngineP__BeaconTimer__startPeriodic(BEACON_TIME);

  return SUCCESS;
}

# 32 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static inline error_t BcpRoutingEngineP__StdControl__start(void )
#line 32
{

  if (!BcpRoutingEngineP__running[sim_node()]) {
      BcpRoutingEngineP__running[sim_node()] = TRUE;
      sim_log_debug(249U, "Routing", "%s Started.  running: %d\n", __FUNCTION__, BcpRoutingEngineP__running[sim_node()]);
    }
  return SUCCESS;
}

# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t BcpCollectionExampleC__ProtoControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = BcpRoutingEngineP__StdControl__start();
#line 74
  __nesc_result = ecombine(__nesc_result, BcpForwardingEngineP__StdControl__start());
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 28 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__SplitControl__start(void )
{
  return SUCCESS;
}

# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t BcpCollectionExampleC__RadioControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = TossimPacketModelC__Control__start();
#line 83
  __nesc_result = ecombine(__nesc_result, CC2420CsmaP__SplitControl__start());
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 95 "BcpCollectionExampleC.nc"
static inline void BcpCollectionExampleC__RadioControl__startDone(error_t err)
#line 95
{
  if (err != SUCCESS) {
      BcpCollectionExampleC__RadioControl__start();
    }
  else {

      sim_log_debug(47U, "Boot", "Radio up, calling ProtoControl.start()\n");
      BcpCollectionExampleC__ProtoControl__start();

      if (TOS_NODE_ID == 0x1) {
          BcpCollectionExampleC__Leds__led2Off();
          BcpCollectionExampleC__Leds__led1Off();
          BcpCollectionExampleC__Leds__led0On();
        }
      else 
        {

          BcpCollectionExampleC__Timer__startOneShot(10000);

          BcpCollectionExampleC__Leds__led2Off();
          BcpCollectionExampleC__Leds__led1Off();
          BcpCollectionExampleC__Leds__led0Off();
        }
    }
}

# 1222 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__RadioControl__startDone(error_t err)
#line 1222
{
  if (err == SUCCESS) {
      BcpForwardingEngineP__radioOn[sim_node()] = TRUE;
      BcpForwardingEngineP__forwarderActivity();
    }
}

# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC__Control__startDone(error_t error){
#line 92
  BcpForwardingEngineP__RadioControl__startDone(error);
#line 92
  BcpCollectionExampleC__RadioControl__startDone(error);
#line 92
}
#line 92
# 88 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__startDoneTask__runTask(void )
#line 88
{
  TossimPacketModelC__running[sim_node()] = TRUE;
  TossimPacketModelC__Control__startDone(SUCCESS);
}

# 121 "BcpCollectionExampleC.nc"
static inline void BcpCollectionExampleC__RadioControl__stopDone(error_t err)
#line 121
{

  sim_log_debug(48U, "Boot", "The radio has been shut down\n");
}

# 1229 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__RadioControl__stopDone(error_t err)
#line 1229
{
  if (err == SUCCESS) {
      BcpForwardingEngineP__radioOn[sim_node()] = FALSE;
    }
}

# 117 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC__Control__stopDone(error_t error){
#line 117
  BcpForwardingEngineP__RadioControl__stopDone(error);
#line 117
  BcpCollectionExampleC__RadioControl__stopDone(error);
#line 117
}
#line 117
# 93 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__stopDoneTask__runTask(void )
#line 93
{
  TossimPacketModelC__running[sim_node()] = FALSE;
  TossimPacketModelC__Control__stopDone(SUCCESS);
}

# 269 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 257
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

# 68 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC__Packet__sendDone(message_t *msg, error_t error){
#line 68
  CC2420CsmaP__Model__sendDone(msg, error);
#line 68
}
#line 68
# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC__getMetadata(message_t *msg)
#line 74
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 137
static inline void TossimPacketModelC__sendDoneTask__runTask(void )
#line 137
{
  message_t *msg = TossimPacketModelC__sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC__getMetadata(msg);

#line 140
  __nesc_hton_uint8(meta->ack.data, 0);
  __nesc_hton_int8(meta->strength.data, 0);
  __nesc_hton_uint16(meta->time.data, 0);
  TossimPacketModelC__sending[sim_node()] = FALSE;
  TossimPacketModelC__Packet__sendDone(msg, TossimPacketModelC__running[sim_node()] ? SUCCESS : EOFF);
}

# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t BcpForwardingEngineP__sendBeaconTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(BcpForwardingEngineP__sendBeaconTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(1U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 151 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  TossimActiveMessageP__AMPacket__setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  TossimActiveMessageP__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(msg, dest);
  /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(msg, 144);
  return /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__send(msg, len);
}

# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t BcpForwardingEngineP__BeaconSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 124 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static inline uint8_t BcpRateControllerP__RateControlIF__getSeqenceNo(void )
#line 124
{
  return BcpRateControllerP__seqNo[sim_node()];
}

# 3 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControlIF.nc"
inline static uint8_t BcpForwardingEngineP__BcpRateControlIF__getSeqenceNo(void ){
#line 3
  unsigned char __nesc_result;
#line 3

#line 3
  __nesc_result = BcpRateControllerP__RateControlIF__getSeqenceNo();
#line 3

#line 3
  return __nesc_result;
#line 3
}
#line 3
# 116 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static inline uint8_t BcpRateControllerP__RateControlIF__getValphaUpper(void )
#line 116
{
  return BcpRateControllerP__Vmax[sim_node()];
}

# 2 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControlIF.nc"
inline static uint8_t BcpForwardingEngineP__BcpRateControlIF__getValphaUpper(void ){
#line 2
  unsigned char __nesc_result;
#line 2

#line 2
  __nesc_result = BcpRateControllerP__RateControlIF__getValphaUpper();
#line 2

#line 2
  return __nesc_result;
#line 2
}
#line 2
# 254 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__sendBeaconTask__runTask(void )
#line 254
{
  error_t eval;


  __nesc_hton_uint16(BcpForwardingEngineP__beaconHdr[sim_node()]->bcpBackpressure.data, BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()] + BcpForwardingEngineP__virtualQueueSize[sim_node()]);
  __nesc_hton_uint8(BcpForwardingEngineP__beaconHdr[sim_node()]->valphaUpper.data, BcpForwardingEngineP__BcpRateControlIF__getValphaUpper());
  __nesc_hton_uint8(BcpForwardingEngineP__beaconHdr[sim_node()]->valphaSeqNo.data, BcpForwardingEngineP__BcpRateControlIF__getSeqenceNo());

  eval = BcpForwardingEngineP__BeaconSend__send(AM_BROADCAST_ADDR, 
  &BcpForwardingEngineP__beaconMsgBuffer[sim_node()], 
  sizeof(bcp_beacon_header_t ));
  if (eval == SUCCESS) {
      sim_log_debug(201U, "Beacon", "%s: successfully called BeaconSend.send()\n", __FUNCTION__);
    }
  else {
#line 268
    if (eval == EOFF) 
      {
        BcpForwardingEngineP__radioOn[sim_node()] = FALSE;
        sim_log_debug(202U, "Beacon", "%s running: %d radioOn: %d\n", __FUNCTION__, BcpForwardingEngineP__running[sim_node()], BcpForwardingEngineP__radioOn[sim_node()]);
        BcpForwardingEngineP__sendBeaconTask__postTask();
      }
    else 
#line 273
      {
        BcpForwardingEngineP__sendBeaconTask__postTask();
      }
    }
}

# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*BcpC.SnoopQueue*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*BcpC.SnoopQueue*/QueueC__0__size[sim_node()] == 0;
}









static inline /*BcpC.SnoopQueue*/QueueC__0__queue_t /*BcpC.SnoopQueue*/QueueC__0__Queue__head(void )
#line 65
{
  return /*BcpC.SnoopQueue*/QueueC__0__queue[sim_node()][/*BcpC.SnoopQueue*/QueueC__0__head[sim_node()]];
}

#line 85
static inline /*BcpC.SnoopQueue*/QueueC__0__queue_t /*BcpC.SnoopQueue*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*BcpC.SnoopQueue*/QueueC__0__queue_t t = /*BcpC.SnoopQueue*/QueueC__0__Queue__head();

#line 87
  sim_log_debug(280U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*BcpC.SnoopQueue*/QueueC__0__size[sim_node()]);
  if (!/*BcpC.SnoopQueue*/QueueC__0__Queue__empty()) {
      /*BcpC.SnoopQueue*/QueueC__0__head[sim_node()]++;
      if (/*BcpC.SnoopQueue*/QueueC__0__head[sim_node()] == 5) {
#line 90
        /*BcpC.SnoopQueue*/QueueC__0__head[sim_node()] = 0;
        }
#line 91
      /*BcpC.SnoopQueue*/QueueC__0__size[sim_node()]--;
      /*BcpC.SnoopQueue*/QueueC__0__printQueue();
    }
  return t;
}

# 81 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static BcpForwardingEngineP__SnoopQueue__t  BcpForwardingEngineP__SnoopQueue__dequeue(void ){
#line 81
  nx_struct message_t *__nesc_result;
#line 81

#line 81
  __nesc_result = /*BcpC.SnoopQueue*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 23 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
inline static void BcpRoutingEngineP__BcpDebugIF__reportValues(uint32_t field1_p, uint32_t field2_p, uint32_t field3_p, uint16_t field4_p, uint16_t field5_p, uint16_t field6_p, uint8_t field7_p, uint8_t field8_p){
#line 23
  BcpCollectionExampleC__BcpDebugIF__reportValues(field1_p, field2_p, field3_p, field4_p, field5_p, field6_p, field7_p, field8_p);
#line 23
}
#line 23
# 1165 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__RouterForwarderIF__setNotifyBurstyLinkNeighbor(am_addr_t neighbor_p)
#line 1165
{
  BcpForwardingEngineP__notifyBurstyLinkNeighbor_m[sim_node()] = neighbor_p;
}

# 24 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
inline static void BcpRoutingEngineP__RouterForwarderIF__setNotifyBurstyLinkNeighbor(am_addr_t neighbor_p){
#line 24
  BcpForwardingEngineP__RouterForwarderIF__setNotifyBurstyLinkNeighbor(neighbor_p);
#line 24
}
#line 24
# 312 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static inline void BcpRoutingEngineP__RouterForwarderIF__updateNeighborSnoop(uint16_t localBackpressure_p, uint16_t snoopBackpressure_p, 
uint16_t nhBackpressure_p, uint8_t nodeTxCount_p, 
am_addr_t neighbor_p, am_addr_t burstNotifyAddr)
{
  uint8_t idx;






  BcpRoutingEngineP__routingTableUpdateEntry(neighbor_p, snoopBackpressure_p);




  idx = BcpRoutingEngineP__routingTableFind(neighbor_p);
  if (BcpRoutingEngineP__routingTable[sim_node()][idx].lastTxNoStreakID + 1 == nodeTxCount_p) 
    {

      BcpRoutingEngineP__routingTable[sim_node()][idx].lastTxNoStreakID++;
      BcpRoutingEngineP__routingTable[sim_node()][idx].txNoStreakCount++;

      if (BcpRoutingEngineP__routingTable[sim_node()][idx].txNoStreakCount == 3 && localBackpressure_p < nhBackpressure_p) 
        {



          BcpRoutingEngineP__BcpDebugIF__reportValues(0, 0, 0, 0, 0, 0, neighbor_p, 0xA1);
          BcpRoutingEngineP__RouterForwarderIF__setNotifyBurstyLinkNeighbor(neighbor_p);
        }
    }
  else 
#line 343
    {


      BcpRoutingEngineP__routingTable[sim_node()][idx].lastTxNoStreakID = nodeTxCount_p;
      BcpRoutingEngineP__routingTable[sim_node()][idx].txNoStreakCount = 0;
    }




  if (burstNotifyAddr == TOS_NODE_ID) 
    {

      BcpRoutingEngineP__BcpDebugIF__reportValues(0, 0, 0, 0, 0, 0, neighbor_p, 0xA3);
      BcpRoutingEngineP__routingTable[sim_node()][idx].isBurstyNow = 1;
    }
}

# 52 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
inline static void BcpForwardingEngineP__RouterForwarderIF__updateNeighborSnoop(uint16_t localBackpressure_p, uint16_t snoopBackpressure_p, uint16_t nhBackpressure_p, uint8_t nodeTxCount_p, am_addr_t neighbor_p, am_addr_t burstNotifyAddr){
#line 52
  BcpRoutingEngineP__RouterForwarderIF__updateNeighborSnoop(localBackpressure_p, snoopBackpressure_p, nhBackpressure_p, nodeTxCount_p, neighbor_p, burstNotifyAddr);
#line 52
}
#line 52
# 73 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static BcpForwardingEngineP__SnoopQueue__t  BcpForwardingEngineP__SnoopQueue__head(void ){
#line 73
  nx_struct message_t *__nesc_result;
#line 73

#line 73
  __nesc_result = /*BcpC.SnoopQueue*/QueueC__0__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
#line 50
inline static bool BcpForwardingEngineP__SnoopQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*BcpC.SnoopQueue*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 286 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__snoopHandlerTask__runTask(void )
#line 286
{
  am_addr_t proximalSrc;
  bcp_data_header_t *snoopPacket;
  message_t *msg;

  if (BcpForwardingEngineP__SnoopQueue__empty()) 
    {
#line 292
      return;
    }
  msg = BcpForwardingEngineP__SnoopQueue__head();

  proximalSrc = BcpForwardingEngineP__AMDataPacket__source(msg);

  snoopPacket = BcpForwardingEngineP__getHeader(msg);





  BcpForwardingEngineP__RouterForwarderIF__updateNeighborSnoop(BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()] + BcpForwardingEngineP__virtualQueueSize[sim_node()], __nesc_ntoh_uint16(
  snoopPacket->bcpBackpressure.data), __nesc_ntoh_uint16(
  snoopPacket->nhBackpressure.data), __nesc_ntoh_uint8(
  snoopPacket->nodeTxCount.data), 
  proximalSrc, __nesc_ntoh_uint16(
  snoopPacket->burstNotifyAddr.data));

  BcpForwardingEngineP__BcpCongestionIF__updateRateControlInfo(__nesc_ntoh_uint8(snoopPacket->valphaUpper.data), __nesc_ntoh_uint8(
  snoopPacket->valphaSeqNo.data));

  BcpForwardingEngineP__SnoopQueue__dequeue();
  if (BcpForwardingEngineP__MessagePool__put(msg) != SUCCESS) 
    {
#line 316
      BcpForwardingEngineP__BcpDebugIF__reportError(0x59);
    }
}

# 301 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 301
{
  uint8_t *base = target;

#line 303
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

# 95 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t BcpForwardingEngineP__SubPacket__maxPayloadLength(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = TossimActiveMessageP__Packet__maxPayloadLength();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 987 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline uint8_t BcpForwardingEngineP__Packet__maxPayloadLength(void )
#line 987
{
  return BcpForwardingEngineP__SubPacket__maxPayloadLength() - (uint8_t )sizeof(bcp_data_header_t );
}

# 131 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static inline void TossimActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 131
{
#line 131
  __nesc_hton_uint8(TossimActiveMessageP__getHeader(msg)->length.data, len);
}

# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void BcpForwardingEngineP__SubPacket__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  TossimActiveMessageP__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 983 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 983
{
  BcpForwardingEngineP__SubPacket__setPayloadLength(msg, len + (uint8_t )sizeof(bcp_data_header_t ));
}

# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t BcpForwardingEngineP__sendDataTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(BcpForwardingEngineP__sendDataTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 151 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static void /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 151
  TossimActiveMessageP__AMPacket__setType(amsg, t);
#line 151
}
#line 151
#line 92
inline static void /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 92
  TossimActiveMessageP__AMPacket__setDestination(amsg, addr);
#line 92
}
#line 92
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline error_t /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 145);
  return /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t BcpForwardingEngineP__SubSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 120 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static inline uint8_t BcpRateControllerP__RateControlIF__getValphaValue(void )
#line 120
{
  return BcpRateControllerP__Valpha[sim_node()];
}

# 4 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControlIF.nc"
inline static uint8_t BcpForwardingEngineP__BcpRateControlIF__getValphaValue(void ){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = BcpRateControllerP__RateControlIF__getValphaValue();
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 120 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__PacketAcknowledgements__requestAck(message_t *msg)
#line 120
{
  tossim_metadata_t *meta = TossimPacketModelC__getMetadata(msg);

#line 122
  __nesc_hton_uint8(meta->ack.data, TRUE);
  return SUCCESS;
}

# 48 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t BcpForwardingEngineP__DataPacketAcknowledgements__requestAck(message_t * msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = TossimPacketModelC__PacketAcknowledgements__requestAck(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 62 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void BcpForwardingEngineP__txRetryTimer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 62
}
#line 62
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t BcpForwardingEngineP__AMDataPacket__destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageP__AMPacket__destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 32 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
inline static void BcpForwardingEngineP__RouterForwarderIF__updateLinkSuccess(am_addr_t neighbor_p, uint8_t txCount_p){
#line 32
  BcpRoutingEngineP__RouterForwarderIF__updateLinkSuccess(neighbor_p, txCount_p);
#line 32
}
#line 32
# 125 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t BcpForwardingEngineP__txRetryTimer__getNow(void ){
#line 125
  unsigned int __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(1U);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/Stack.nc"
inline static BcpForwardingEngineP__SendStack__t  BcpForwardingEngineP__SendStack__popTop(void ){
#line 83
  struct __nesc_unnamed4308 *__nesc_result;
#line 83

#line 83
  __nesc_result = /*BcpC.SendStack*/StackC__0__Stack__popTop();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static uint8_t BcpForwardingEngineP__MessagePool__size(void ){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__size();
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
inline static uint8_t BcpForwardingEngineP__QEntryPool__size(void ){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__size();
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 52 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/Stack.nc"
inline static bool BcpForwardingEngineP__SendStack__empty(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = /*BcpC.SendStack*/StackC__0__Stack__empty();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 1160 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__RouterForwarderIF__setNextHopAddress(am_addr_t nextHopAddress_p, uint16_t nextHopBackpressure_p)
#line 1160
{
  BcpForwardingEngineP__nextHopAddress_m[sim_node()] = nextHopAddress_p;
  BcpForwardingEngineP__nextHopBackpressure_m[sim_node()] = nextHopBackpressure_p;
}

# 17 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
inline static void BcpRoutingEngineP__RouterForwarderIF__setNextHopAddress(am_addr_t nextHopAddress_p, uint16_t nextHopBackpressure_p){
#line 17
  BcpForwardingEngineP__RouterForwarderIF__setNextHopAddress(nextHopAddress_p, nextHopBackpressure_p);
#line 17
}
#line 17
# 111 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static inline error_t BcpRoutingEngineP__RouterForwarderIF__updateRouting(uint16_t localBackpressure_p)
#line 111
{
  uint8_t compareIdx = 0;
  int32_t compareWeight = 0;
  uint8_t maxWeightIdx = 0;
  int32_t maxWeight = -1;
  am_addr_t bestNeighbor = 0;
  bool burstNeighborFound = 0;
  uint8_t bestBurstNeighborIdx = 0;
  uint16_t bestBurstNeighborBackpressure = 0;

  if (BcpRoutingEngineP__routingTableActive[sim_node()] == 0) 
    {

      return FAIL;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    {
      uint32_t longLocalBackpressure = localBackpressure_p;
      uint32_t longNeighborBackpressure = 0;
      uint32_t longLinkETX = 0;
      uint32_t longLinkRate = 0;

#line 132
      for (compareIdx = 0; compareIdx < BcpRoutingEngineP__routingTableActive[sim_node()]; compareIdx++) {






          if (BcpRoutingEngineP__routingTable[sim_node()][compareIdx].isBurstyNow == 1) 
            {



              BcpRoutingEngineP__routingTable[sim_node()][compareIdx].isBurstyNow = 0;
              if (!burstNeighborFound || bestBurstNeighborBackpressure > BcpRoutingEngineP__routingTable[sim_node()][compareIdx].backpressure) 
                {
                  burstNeighborFound = 1;
                  bestBurstNeighborIdx = compareIdx;
                  bestBurstNeighborBackpressure = BcpRoutingEngineP__routingTable[sim_node()][compareIdx].backpressure;
                }
            }
          else 
#line 151
            {

              longNeighborBackpressure = BcpRoutingEngineP__routingTable[sim_node()][compareIdx].backpressure;
              longLinkETX = LINK_LOSS_V * BcpRoutingEngineP__routingTable[sim_node()][compareIdx].linkETX / 100;
              longLinkRate = 10000 / BcpRoutingEngineP__routingTable[sim_node()][compareIdx].linkPacketTxTime;
              compareWeight = (longLocalBackpressure - longNeighborBackpressure - longLinkETX) * longLinkRate;

              if (compareWeight > maxWeight) 
                {
                  maxWeightIdx = compareIdx;
                  maxWeight = compareWeight;
                }
            }
        }

      if (burstNeighborFound && BcpRoutingEngineP__routingTable[sim_node()][maxWeightIdx].backpressure >= bestBurstNeighborBackpressure) 
        {

          maxWeight = (int32_t )localBackpressure_p - (int32_t )bestBurstNeighborBackpressure - LINK_LOSS_V;
          if (maxWeight > 0) 
            {


              BcpRoutingEngineP__BcpDebugIF__reportValues(localBackpressure_p, bestBurstNeighborBackpressure, 0, 0, 0, 0, bestNeighbor, 0x12);
              BcpRoutingEngineP__routingTable[sim_node()][bestBurstNeighborIdx].isBurstyNow = 1;
            }
          bestNeighbor = BcpRoutingEngineP__routingTable[sim_node()][bestBurstNeighborIdx].neighbor;
          maxWeightIdx = bestBurstNeighborIdx;
        }
      else 
#line 179
        {
          bestNeighbor = BcpRoutingEngineP__routingTable[sim_node()][maxWeightIdx].neighbor;
        }
    }
#line 182
    __nesc_atomic_end(__nesc_atomic); }

  if (maxWeight <= 0) 
    {



      return FAIL;
    }






  BcpRoutingEngineP__RouterForwarderIF__setNextHopAddress(bestNeighbor, BcpRoutingEngineP__routingTable[sim_node()][maxWeightIdx].backpressure);
  return SUCCESS;
}

# 8 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
inline static error_t BcpForwardingEngineP__RouterForwarderIF__updateRouting(uint16_t localBackpressure_p){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = BcpRoutingEngineP__RouterForwarderIF__updateRouting(localBackpressure_p);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 335 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__sendDataTask__runTask(void )
#line 335
{
  unsigned short __nesc_temp43;
  unsigned char *__nesc_temp42;
#line 336
  fe_queue_entry_t *qe;
  fe_queue_entry_t *nullQe;
  message_t *nullMsg;
  bcp_data_header_t *nullHdr;
  error_t subsendResult;
  error_t retVal;
  uint8_t payloadLen;
  am_addr_t dest;
  bcp_data_header_t *hdr;
  uint32_t sendTime;
  uint16_t checksum = 0;


  if (BcpForwardingEngineP__RootControl__isRoot()) {
      BcpForwardingEngineP__sending[sim_node()] = FALSE;
      if (BcpForwardingEngineP__sendQeOccupied[sim_node()] == TRUE) {
          qe = BcpForwardingEngineP__sendQe[sim_node()];
          BcpForwardingEngineP__sendQeOccupied[sim_node()] = FALSE;
        }
      else 
#line 354
        {
          if (BcpForwardingEngineP__SendStack__empty() && BcpForwardingEngineP__virtualQueueSize[sim_node()] == 0) {

              BcpForwardingEngineP__BcpDebugIF__reportError(0x4a);
              return;
            }
          qe = BcpForwardingEngineP__sendQe[sim_node()] = BcpForwardingEngineP__SendStack__popTop();
        }

      memcpy(BcpForwardingEngineP__loopbackMsgPtr[sim_node()], qe->msg, sizeof(message_t ));
      retVal = BcpForwardingEngineP__MessagePool__put(qe->msg);
      if (retVal != SUCCESS) {
#line 365
          BcpForwardingEngineP__BcpDebugIF__reportError(0xbb);
        }
#line 366
      retVal = BcpForwardingEngineP__QEntryPool__put(qe);
      if (retVal != SUCCESS) {
#line 367
          BcpForwardingEngineP__BcpDebugIF__reportError(0xbc);
        }
      BcpForwardingEngineP__loopbackMsgPtr[sim_node()] = BcpForwardingEngineP__Receive__receive(BcpForwardingEngineP__loopbackMsgPtr[sim_node()], 
      BcpForwardingEngineP__Packet__getPayload(BcpForwardingEngineP__loopbackMsgPtr[sim_node()], BcpForwardingEngineP__Packet__payloadLength(BcpForwardingEngineP__loopbackMsgPtr[sim_node()])), 
      BcpForwardingEngineP__Packet__payloadLength(BcpForwardingEngineP__loopbackMsgPtr[sim_node()]));


      BcpForwardingEngineP__forwarderActivity();
      return;
    }

  if (BcpForwardingEngineP__sendQeOccupied[sim_node()] == TRUE) 
    {
      qe = BcpForwardingEngineP__sendQe[sim_node()];
    }
  else 
#line 381
    {
      if (BcpForwardingEngineP__SendStack__empty() && BcpForwardingEngineP__virtualQueueSize[sim_node()] == 0) 
        {

          BcpForwardingEngineP__BcpDebugIF__reportError(0x40);
          return;
        }


      retVal = BcpForwardingEngineP__RouterForwarderIF__updateRouting(BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()] + BcpForwardingEngineP__virtualQueueSize[sim_node()]);
      if (retVal == FAIL) 
        {

          BcpForwardingEngineP__sending[sim_node()] = FALSE;
          BcpForwardingEngineP__txRetryTimer__startOneShot(REROUTE_TIME);
          return;
        }

      if (BcpForwardingEngineP__SendStack__empty()) 
        {

          BcpForwardingEngineP__BcpDebugIF__reportValues(0, 0, 0, 0, BcpForwardingEngineP__QEntryPool__size(), BcpForwardingEngineP__MessagePool__size(), 0, 0xda);

          nullQe = BcpForwardingEngineP__QEntryPool__get();
          if (nullQe == (void *)0) {
              sim_log_debug(203U, "ERROR", "%s client cannot enqueue, QEntryPool.get() error.", __FUNCTION__);
              BcpForwardingEngineP__BcpDebugIF__reportError(0x6b);
              return;
            }

          nullMsg = BcpForwardingEngineP__MessagePool__get();
          if (nullMsg == (void *)0) {
              sim_log_debug(204U, "ERROR", "%s cannot forward, MessagePool.get() error.", __FUNCTION__);
              BcpForwardingEngineP__BcpDebugIF__reportError(0x6c);

              if (BcpForwardingEngineP__QEntryPool__put(nullQe) != SUCCESS) {
                  sim_log_debug(205U, "ERROR", "%s memory leak, QEntryPool.put() error.", __FUNCTION__);
                  BcpForwardingEngineP__BcpDebugIF__reportError(0x6d);
                }
              return;
            }

          nullHdr = BcpForwardingEngineP__getHeader(nullMsg);
          __nesc_hton_uint8(nullHdr->hopCount.data, 0);
          __nesc_hton_uint16(nullHdr->origin.data, TOS_NODE_ID);
          __nesc_hton_uint8(nullHdr->originSeqNo.data, BcpForwardingEngineP__nullSeqNo[sim_node()]++);
          __nesc_hton_uint32(nullHdr->bcpDelay.data, 0);
          __nesc_hton_uint16(nullHdr->txCount.data, 0);
          __nesc_hton_uint8(nullHdr->pktType.data, PKT_NULL);

          nullQe->arrivalTime = BcpForwardingEngineP__DelayPacketTimer__getNow();
          nullQe->firstTxTime = 0;
          nullQe->bcpArrivalDelay = 0;
          nullQe->msg = nullMsg;
          nullQe->source = LOCAL_SEND;
          nullQe->txCount = 0;

          retVal = BcpForwardingEngineP__SendStack__pushTop(nullQe);
          if (retVal != SUCCESS) {
            BcpForwardingEngineP__BcpDebugIF__reportError(0x47);
            }
          BcpForwardingEngineP__virtualQueueSize[sim_node()]--;
        }


      qe = BcpForwardingEngineP__sendQe[sim_node()] = BcpForwardingEngineP__SendStack__popTop();
      qe->firstTxTime = BcpForwardingEngineP__txRetryTimer__getNow();
      BcpForwardingEngineP__sendQeOccupied[sim_node()] = TRUE;
    }

  payloadLen = BcpForwardingEngineP__SubPacket__payloadLength(qe->msg);



  if (qe->txCount >= MAX_RETX_ATTEMPTS) 
    {
      BcpForwardingEngineP__RouterForwarderIF__updateLinkSuccess(BcpForwardingEngineP__AMDataPacket__destination(qe->msg), 2 * MAX_RETX_ATTEMPTS);
      BcpForwardingEngineP__BcpDebugIF__reportValues(0, 0, 0, 0, 0, MAX_RETX_ATTEMPTS, BcpForwardingEngineP__AMDataPacket__destination(qe->msg), 0x77);
      qe->txCount = 0;


      BcpForwardingEngineP__conditionalFQDiscard();
      retVal = BcpForwardingEngineP__SendStack__pushTop(qe);
      if (retVal != SUCCESS) {
        BcpForwardingEngineP__BcpDebugIF__reportError(0x48);
        }
      BcpForwardingEngineP__sendQeOccupied[sim_node()] = FALSE;


      BcpForwardingEngineP__sending[sim_node()] = FALSE;
      BcpForwardingEngineP__txRetryTimer__startOneShot(REROUTE_TIME);
      return;
    }

  qe->txCount++;
  BcpForwardingEngineP__localTXCount[sim_node()]++;

  dest = BcpForwardingEngineP__nextHopAddress_m[sim_node()];


  BcpForwardingEngineP__DataPacketAcknowledgements__requestAck(qe->msg);


  hdr = BcpForwardingEngineP__getHeader(qe->msg);
  __nesc_hton_uint16(hdr->bcpBackpressure.data, BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()] + BcpForwardingEngineP__virtualQueueSize[sim_node()]);

  __nesc_hton_uint16(hdr->nhBackpressure.data, BcpForwardingEngineP__nextHopBackpressure_m[sim_node()]);

  __nesc_hton_uint8(hdr->nodeTxCount.data, BcpForwardingEngineP__localTXCount[sim_node()]);

  __nesc_hton_uint16(hdr->burstNotifyAddr.data, BcpForwardingEngineP__notifyBurstyLinkNeighbor_m[sim_node()]);
  BcpForwardingEngineP__notifyBurstyLinkNeighbor_m[sim_node()] = TOS_NODE_ID;


  (__nesc_temp42 = hdr->txCount.data, __nesc_hton_uint16(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint16(__nesc_temp42)) + 1), __nesc_temp43);

  __nesc_hton_uint8(hdr->valphaValue.data, BcpForwardingEngineP__BcpRateControlIF__getValphaValue());

  if (__nesc_ntoh_uint8(hdr->valphaSeqNo.data) < BcpForwardingEngineP__BcpRateControlIF__getSeqenceNo()) {

      __nesc_hton_uint8(hdr->valphaUpper.data, BcpForwardingEngineP__BcpRateControlIF__getValphaUpper());

      __nesc_hton_uint8(hdr->valphaSeqNo.data, BcpForwardingEngineP__BcpRateControlIF__getSeqenceNo());
    }

  sendTime = BcpForwardingEngineP__DelayPacketTimer__getNow();


  __nesc_hton_uint32(hdr->bcpDelay.data, qe->bcpArrivalDelay + (sendTime - qe->arrivalTime) + PER_HOP_MAC_DLY);


  checksum = BcpForwardingEngineP__calcHdrChecksum(qe->msg);
  __nesc_hton_uint16(hdr->hdrChecksum.data, checksum);

  subsendResult = BcpForwardingEngineP__SubSend__send(dest, qe->msg, payloadLen);
  if (subsendResult == SUCCESS) {

      sim_log_debug(206U, "Forwarder", "%s: subsend succeeded with %p.\n", __FUNCTION__, qe->msg);
      return;
    }
  else {
#line 521
    if (subsendResult == EOFF) {



        BcpForwardingEngineP__radioOn[sim_node()] = FALSE;
        sim_log_debug(207U, "Forwarder", "%s: subsend failed from EOFF.\n", __FUNCTION__);
        BcpForwardingEngineP__BcpDebugIF__reportError(0x32);
      }
    else {
#line 529
      if (subsendResult == EBUSY) {





          sim_log_debug(208U, "Forwarder", "%s: subsend failed from EBUSY.\n", __FUNCTION__);
          BcpForwardingEngineP__BcpDebugIF__reportError(0x33);

          BcpForwardingEngineP__sendDataTask__postTask();
        }
      else {
#line 540
        if (subsendResult == ESIZE) {
            sim_log_debug(209U, "Forwarder", "%s: subsend failed from ESIZE: truncate packet.\n", __FUNCTION__);
            BcpForwardingEngineP__Packet__setPayloadLength(qe->msg, BcpForwardingEngineP__Packet__maxPayloadLength());
            BcpForwardingEngineP__BcpDebugIF__reportError(0x34);
          }
        }
      }
    }
}

# 128 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 72
}
#line 72
# 226 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 105
  unsigned int __nesc_result;
#line 105

#line 105
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
#line 92
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 92
}
#line 92
# 47 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[sim_node()], FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

#line 82
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 118 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 118
}
#line 118
# 204 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 62
}
#line 62
# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 67
}
#line 67
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 124
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 161 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg, FAIL);
}

# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  BcpForwardingEngineP__SubSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 99
  BcpForwardingEngineP__BeaconSend__sendDone(msg, error);
#line 99
}
#line 99
# 57 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 57
{
  /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 207 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x40ee7e80, message_t * msg, error_t error){
#line 89
  switch (arg_0x40ee7e80) {
#line 89
    case 0U:
#line 89
      /*BcpC.DataSend.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x40ee7e80, msg, error);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 2 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 146 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline uint8_t SerialActiveMessageC__Packet__payloadLength(message_t *msg)
#line 146
{
  return __nesc_ntoh_uint8(SerialActiveMessageC__getHeader(msg)->length.data);
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t SafeSerialSendM__UartPacket__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SerialActiveMessageC__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline error_t SerialActiveMessageC__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 74
{
  sim_log_debug(353U, "Serial", "Serial: sending a packet of size %d\n", len);
  return FAIL;
}

# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t SafeSerialSendM__UartSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = SerialActiveMessageC__AMSend__send(137, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 65 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue_t /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__head(void )
#line 65
{
  return /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue[sim_node()][/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__head[sim_node()]];
}

# 73 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static SafeSerialSendM__SendQueue__t  SafeSerialSendM__SendQueue__head(void ){
#line 73
  nx_struct message_t *__nesc_result;
#line 73

#line 73
  __nesc_result = /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 32 "SafeSerialSendM.nc"
static inline void SafeSerialSendM__sendTask__runTask(void )
#line 32
{
  message_t *newMsg;
  error_t retVal;

#line 35
  newMsg = SafeSerialSendM__SendQueue__head();

  if (SafeSerialSendM__sending_m[sim_node()]) {
    return;
    }
  sim_log_debug(338U, "Serial", "%s:calling UartSend.send\n", __FUNCTION__);
  retVal = SafeSerialSendM__UartSend__send(AM_BROADCAST_ADDR, newMsg, SafeSerialSendM__UartPacket__payloadLength(newMsg));
  if (retVal == SUCCESS) {
    SafeSerialSendM__sending_m[sim_node()] = TRUE;
    }
  else {
#line 45
    sim_log_debug(339U, "Serial", "%s:call to UartSend.send failed with code %u.\n", __FUNCTION__, retVal);
    }
}

# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialActiveMessageC__startDone__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(SerialActiveMessageC__startDone);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 62 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline error_t SerialActiveMessageC__SplitControl__start(void )
#line 62
{
  SerialActiveMessageC__startDone__postTask();
  return SUCCESS;
}

# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t SafeSerialSendM__SerialControl__start(void ){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  __nesc_result = SerialActiveMessageC__SplitControl__start();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 78 "SafeSerialSendM.nc"
static inline void SafeSerialSendM__SerialControl__startDone(error_t error)
#line 78
{
  if (error != SUCCESS) {

      SafeSerialSendM__SerialControl__start();
    }
  else 
#line 82
    {
      SafeSerialSendM__serialRunning_m[sim_node()] = TRUE;
    }
}

# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialActiveMessageC__SplitControl__startDone(error_t error){
#line 92
  SafeSerialSendM__SerialControl__startDone(error);
#line 92
}
#line 92
# 59 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline void SerialActiveMessageC__startDone__runTask(void )
#line 59
{
#line 59
  SerialActiveMessageC__SplitControl__startDone(SUCCESS);
}

# 87 "SafeSerialSendM.nc"
static inline void SafeSerialSendM__SerialControl__stopDone(error_t error)
#line 87
{
  SafeSerialSendM__serialRunning_m[sim_node()] = FALSE;
}

# 117 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialActiveMessageC__SplitControl__stopDone(error_t error){
#line 117
  SafeSerialSendM__SerialControl__stopDone(error);
#line 117
}
#line 117
# 60 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SerialActiveMessageC.nc"
static inline void SerialActiveMessageC__stopDone__runTask(void )
#line 60
{
#line 60
  SerialActiveMessageC__SplitControl__stopDone(SUCCESS);
}

# 213 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x406b1650){
#line 64
  switch (arg_0x406b1650) {
#line 64
    case CC2420ControlP__syncDoneTask:
#line 64
      CC2420ControlP__syncDoneTask__runTask();
#line 64
      break;
#line 64
    case CpmModelC__read_rssi_task:
#line 64
      CpmModelC__read_rssi_task__runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC__startDoneTask:
#line 64
      TossimPacketModelC__startDoneTask__runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC__stopDoneTask:
#line 64
      TossimPacketModelC__stopDoneTask__runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC__sendDoneTask:
#line 64
      TossimPacketModelC__sendDoneTask__runTask();
#line 64
      break;
#line 64
    case BcpForwardingEngineP__sendBeaconTask:
#line 64
      BcpForwardingEngineP__sendBeaconTask__runTask();
#line 64
      break;
#line 64
    case BcpForwardingEngineP__snoopHandlerTask:
#line 64
      BcpForwardingEngineP__snoopHandlerTask__runTask();
#line 64
      break;
#line 64
    case BcpForwardingEngineP__sendDataTask:
#line 64
      BcpForwardingEngineP__sendDataTask__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 64
      break;
#line 64
    case SafeSerialSendM__sendTask:
#line 64
      SafeSerialSendM__sendTask__runTask();
#line 64
      break;
#line 64
    case SerialActiveMessageC__startDone:
#line 64
      SerialActiveMessageC__startDone__runTask();
#line 64
      break;
#line 64
    case SerialActiveMessageC__stopDone:
#line 64
      SerialActiveMessageC__stopDone__runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SimSchedulerBasicP__TaskBasic__default__runTask(arg_0x406b1650);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 132 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__PacketAcknowledgements__wasAcked(message_t *ack)
#line 132
{
  tossim_metadata_t *meta = TossimPacketModelC__getMetadata(ack);

#line 134
  return __nesc_ntoh_uint8(meta->ack.data);
}

# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static bool BcpForwardingEngineP__DataPacketAcknowledgements__wasAcked(message_t * msg){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = TossimPacketModelC__PacketAcknowledgements__wasAcked(msg);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 11 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
inline static void BcpRoutingEngineP__BcpDebugIF__reportError(uint8_t type_p){
#line 11
  BcpCollectionExampleC__BcpDebugIF__reportError(type_p);
#line 11
}
#line 11
# 205 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static inline void BcpRoutingEngineP__RouterForwarderIF__txNoAck(am_addr_t neighbor_p)
{
  uint8_t routingTableIdx;

  routingTableIdx = BcpRoutingEngineP__routingTableFind(neighbor_p);
  if (routingTableIdx == ROUTING_TABLE_SIZE) {

      BcpRoutingEngineP__BcpDebugIF__reportError(0xAF);
      return;
    }


  if (BcpRoutingEngineP__routingTable[sim_node()][routingTableIdx].isBurstyNow == 1) 
    {
      BcpRoutingEngineP__BcpDebugIF__reportValues(0, 0, 0, 0, 0, 0, neighbor_p, 0xA4);
      BcpRoutingEngineP__routingTable[sim_node()][routingTableIdx].isBurstyNow = 0;
    }
}

# 30 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
inline static void BcpForwardingEngineP__RouterForwarderIF__txNoAck(am_addr_t neighbor_p){
#line 30
  BcpRoutingEngineP__RouterForwarderIF__txNoAck(neighbor_p);
#line 30
}
#line 30
# 87 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static inline void BcpRateControllerP__BcpCongestionIF__congestionNotify(void )
#line 87
{
  sim_log_debug(319U, "RateControl", "%s: Notify Congestion.\n", __FUNCTION__);

  BcpRateControllerP__Tretx[sim_node()]++;

  if (BcpRateControllerP__Tretx[sim_node()] > BcpRateControllerP__Tthreshold[sim_node()]) {
      BcpRateControllerP__Tretx[sim_node()] = 0;
      BcpRateControllerP__Valpha[sim_node()] /= 2;
      sim_log_debug(320U, "RateControl", "%s: Congestion Occur, Valpha is %hu. \n", __FUNCTION__, BcpRateControllerP__Valpha[sim_node()]);
    }
}

# 2 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpCongestionIF.nc"
inline static void BcpForwardingEngineP__BcpCongestionIF__congestionNotify(void ){
#line 2
  BcpRateControllerP__BcpCongestionIF__congestionNotify();
#line 2
}
#line 2
# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static inline void BcpRateControllerP__BcpCongestionIF__noCongestionNotify(void )
#line 99
{
  uint8_t inc = 1;

#line 101
  if (BcpRateControllerP__Valpha[sim_node()] < BcpRateControllerP__Vmax[sim_node()]) {
      BcpRateControllerP__Valpha[sim_node()] += inc;
      sim_log_debug(321U, "RateControl", "%s: Increase Valpha to %hu, Vmax is %hu.\n", __FUNCTION__, BcpRateControllerP__Valpha[sim_node()], BcpRateControllerP__Vmax[sim_node()]);
    }
}

# 3 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpCongestionIF.nc"
inline static void BcpForwardingEngineP__BcpCongestionIF__noCongestionNotify(void ){
#line 3
  BcpRateControllerP__BcpCongestionIF__noCongestionNotify();
#line 3
}
#line 3
# 84 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline uint8_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__maxSize(void )
#line 84
{
  return 17;
}

# 80 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static uint8_t BcpForwardingEngineP__MessagePool__maxSize(void ){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__maxSize();
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 25 "SafeSerialSendIF.nc"
inline static void BcpCollectionExampleC__SafeSerialSendIF__queueMessageBuffer(message_t *sendMsg_p){
#line 25
  SafeSerialSendM__SafeSerialSendIF__queueMessageBuffer(sendMsg_p);
#line 25
}
#line 25
#line 16
inline static void *BcpCollectionExampleC__SafeSerialSendIF__getPayload(message_t *msg_p, uint8_t size_p){
#line 16
  void *__nesc_result;
#line 16

#line 16
  __nesc_result = SafeSerialSendM__SafeSerialSendIF__getPayload(msg_p, size_p);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
#line 9
inline static message_t *BcpCollectionExampleC__SafeSerialSendIF__getMessageBuffer(void ){
#line 9
  nx_struct message_t *__nesc_result;
#line 9

#line 9
  __nesc_result = SafeSerialSendM__SafeSerialSendIF__getMessageBuffer();
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 565 "BcpCollectionExampleC.nc"
static inline void BcpCollectionExampleC__BcpDebugIF__reportLinkRate(uint8_t neighbor_p, uint16_t previousLinkPacketTxTime_p, 
uint16_t updateLinkPacketTxTime_p, uint16_t newLinkPacketTxTime_p, 
uint16_t latestLinkPacktLossEst_p)
{
  message_t *messagePtr;
  UartPacket *uartPacketPtr;


  messagePtr = BcpCollectionExampleC__SafeSerialSendIF__getMessageBuffer();
  if (messagePtr == 0) {
    return;
    }
#line 576
  uartPacketPtr = (UartPacket *)BcpCollectionExampleC__SafeSerialSendIF__getPayload(messagePtr, sizeof(UartPacket ));
  if (uartPacketPtr == (void *)0) {
    sim_log_debug(68U, "Error", "%s:uartPacketPtr is NULL! Packet size error?\n", __FUNCTION__);
    }
#line 579
  __nesc_hton_uint8(uartPacketPtr->type.data, 0x04);
  __nesc_hton_uint32(uartPacketPtr->field1.data, latestLinkPacktLossEst_p);
  __nesc_hton_uint32(uartPacketPtr->field2.data, 0x0000);
  __nesc_hton_uint32(uartPacketPtr->field3.data, 0x0000);
  __nesc_hton_uint16(uartPacketPtr->field4.data, previousLinkPacketTxTime_p);
  __nesc_hton_uint16(uartPacketPtr->field5.data, updateLinkPacketTxTime_p);
  __nesc_hton_uint16(uartPacketPtr->field6.data, newLinkPacketTxTime_p);
  __nesc_hton_uint8(uartPacketPtr->field7.data, 0x00);
  __nesc_hton_uint8(uartPacketPtr->field8.data, neighbor_p);

  __nesc_hton_uint32(uartPacketPtr->time.data, BcpCollectionExampleC__Timer__getNow());

  BcpCollectionExampleC__SafeSerialSendIF__queueMessageBuffer(messagePtr);
}

# 16 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
inline static void BcpRoutingEngineP__BcpDebugIF__reportLinkRate(uint8_t neighbor_p, uint16_t previousLinkPacketTxTime_p, uint16_t updateLinkPacketTxTime_p, uint16_t newLinkPacketTxTime, uint16_t latestLinkPacktLossEst){
#line 16
  BcpCollectionExampleC__BcpDebugIF__reportLinkRate(neighbor_p, previousLinkPacketTxTime_p, updateLinkPacketTxTime_p, newLinkPacketTxTime, latestLinkPacktLossEst);
#line 16
}
#line 16
# 250 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static inline void BcpRoutingEngineP__RouterForwarderIF__updateLinkRate(am_addr_t neighbor_p, uint16_t newLinkPacketTxTime_p)
{
  uint16_t previousLinkPacketTxTime;
  uint16_t newLinkPacketTxTime;
  uint8_t routingTableIdx = BcpRoutingEngineP__routingTableFind(neighbor_p);





  if (routingTableIdx == BcpRoutingEngineP__routingTableActive[sim_node()]) {

      sim_log_debug(254U, "ERROR", "%s: <neighbor,newLinkPacketTxTime_p>=<%hhu,%u> update failed, can't find neighbor?\n", __FUNCTION__, neighbor_p, newLinkPacketTxTime_p);
      return;
    }



  if (newLinkPacketTxTime_p == 0) {
    newLinkPacketTxTime = 1;
    }
  else {
#line 271
    newLinkPacketTxTime = newLinkPacketTxTime_p;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 273
    {
      previousLinkPacketTxTime = BcpRoutingEngineP__routingTable[sim_node()][routingTableIdx].linkPacketTxTime;



      BcpRoutingEngineP__routingTable[sim_node()][routingTableIdx].linkPacketTxTime = (
      LINK_EST_ALPHA * (uint32_t )BcpRoutingEngineP__routingTable[sim_node()][routingTableIdx].linkPacketTxTime + (
      10 - LINK_EST_ALPHA) * (uint32_t )newLinkPacketTxTime) / 10;
    }
#line 281
    __nesc_atomic_end(__nesc_atomic); }

  sim_log_debug(255U, "LinkRate", "%s: <neighbor_p,previousLinkPacketTxTime,newLinkPacketTxTime,linkPacketTxTime>=<%hhu,%u,%u,%u>\n", __FUNCTION__, neighbor_p, previousLinkPacketTxTime, newLinkPacketTxTime, BcpRoutingEngineP__routingTable[sim_node()][routingTableIdx].linkPacketTxTime);



  BcpRoutingEngineP__BcpDebugIF__reportLinkRate(neighbor_p, previousLinkPacketTxTime, newLinkPacketTxTime, 
  BcpRoutingEngineP__routingTable[sim_node()][routingTableIdx].linkPacketTxTime, BcpRoutingEngineP__routingTable[sim_node()][routingTableIdx].linkETX);
}

# 38 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRouterForwarderIF.nc"
inline static void BcpForwardingEngineP__RouterForwarderIF__updateLinkRate(am_addr_t neighbor_p, uint16_t newLinkPacketTxTime_p){
#line 38
  BcpRoutingEngineP__RouterForwarderIF__updateLinkRate(neighbor_p, newLinkPacketTxTime_p);
#line 38
}
#line 38
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x40f1a908, am_addr_t addr, message_t * msg, uint8_t len){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = TossimActiveMessageP__AMSend__send(arg_0x40f1a908, addr, msg, len);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageP__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageP__AMPacket__destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
#line 136
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = TossimActiveMessageP__AMPacket__type(amsg);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 57 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] + 1) % 2;
  for (i = 0; i < 2; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] + 1) % 2;
        }
      else {
          break;
        }
    }
  if (i >= 2) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = 2;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] < 2) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 174 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static inline void TossimActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
#line 174
{
}

# 59 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/SendNotifier.nc"
inline static void TossimActiveMessageP__SendNotifier__aboutToSend(am_id_t arg_0x409991d0, am_addr_t dest, message_t * msg){
#line 59
    TossimActiveMessageP__SendNotifier__default__aboutToSend(arg_0x409991d0, dest, msg);
#line 59
}
#line 59
# 118 "/home/xinchaol/local/src/tinyos-2.x/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP__state[sim_node()][id] = StateImplP__S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/State.nc"
inline static void UniqueSendP__State__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t CC2420CsmaP__AMPacket__destination(message_t * amsg){
#line 67
  unsigned short __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageP__AMPacket__destination(amsg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 495 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg)
#line 495
{
  free(msg);
}

# 52 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC__Model__shouldAck(message_t *msg){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = TossimPacketModelC__GainRadioModel__shouldAck(msg);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 77 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC__Packet__receive(message_t *msg){
#line 77
  CC2420CsmaP__Model__receive(msg);
#line 77
}
#line 77
# 279 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__GainRadioModel__receive(message_t *msg)
#line 279
{
  if (TossimPacketModelC__running[sim_node()] && !TossimPacketModelC__transmitting[sim_node()]) {
      TossimPacketModelC__Packet__receive(msg);
    }
}

# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC__Model__receive(message_t *msg){
#line 51
  TossimPacketModelC__GainRadioModel__receive(msg);
#line 51
}
#line 51
# 254 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg)
#line 254
{
  double noise = CpmModelC__noise_hash_generation();
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];
  int count = 0;

#line 258
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      sim_log_debug(157U, "CpmModelC", "checkReceive: outstanding from %d\n", list->source);
      count++;

      if (list->channel != sim_mote_get_radio_channel(sim_node())) {
          list = list->next;
          continue;
        }

      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  sim_log_debug(158U, "CpmModelC", "checkReceive: outstanding count %d noise %lf at %lf\n", count, noise, (double )sim_time() / sim_ticks_per_sec());
  msg->lqi = sim_lqi_generate(msg->power - noise);
  return CpmModelC__shouldReceive(msg->power - noise);
}

#line 310
static inline void CpmModelC__sim_gain_receive_handle(sim_event_t *evt)
#line 310
{
  CpmModelC__receive_message_t *mine = (CpmModelC__receive_message_t *)evt->data;
  CpmModelC__receive_message_t *predecessor = (void *)0;
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];

  sim_log_debug(161U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 325
    if (mine == CpmModelC__outstandingReceptionHead[sim_node()]) {
        CpmModelC__outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(162U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 331
  sim_log_debug(163U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC__checkReceive(mine)) {
      sim_log_debug(164U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }

  if (mine->channel != sim_mote_get_radio_channel(sim_node())) {
      CpmModelC__free_receive_message(mine);
      CpmModelC__receiving[sim_node()] = 0;
      return;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 347
      __nesc_hton_int8(meta->strength.data, mine->strength);
      __nesc_hton_uint8(meta->lqi.data, mine->lqi);

      sim_log_debug_clear(165U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC__Model__receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(166U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(167U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC__Model__shouldAck(mine->msg)) {
          sim_log_debug_clear(168U, "CpmModelC", " scheduling ack.\n");
          CpmModelC__sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC__free_receive_message(mine);
        }

      CpmModelC__receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(169U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC__Model__shouldAck(mine->msg)) {
              sim_log_debug_clear(170U, "CpmModelC", " scheduling ack.\n");
              CpmModelC__sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC__free_receive_message(mine);
            }
        }
      else {
          CpmModelC__free_receive_message(mine);
        }
      CpmModelC__receiving[sim_node()] = 0;
      sim_log_debug_clear(171U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 479
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t endTime, CpmModelC__receive_message_t *msg)
#line 479
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 481
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC__sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void )
#line 491
{
  return (CpmModelC__receive_message_t *)malloc(sizeof(CpmModelC__receive_message_t ));
}

#line 390
static inline void CpmModelC__enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 390
{
  sim_event_t *evt;
  CpmModelC__receive_message_t *list;
  CpmModelC__receive_message_t *rcv = CpmModelC__allocate_receive_message();
  double noiseStr = CpmModelC__packetNoise(rcv);

#line 395
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;
  rcv->channel = sim_mote_get_radio_channel(source);





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(172U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 418
    if (!CpmModelC__shouldReceive(power - noiseStr)) {
        sim_log_debug(173U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 422
      if (sim_mote_get_radio_channel(sim_node()) != sim_mote_get_radio_channel(source)) {
          rcv->lost = 1;
        }
      else {
#line 425
        if (CpmModelC__receiving[sim_node()]) {
            sim_log_debug(174U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
            rcv->lost = 1;
          }
        else {
            CpmModelC__receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 433
  list = CpmModelC__outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (list->channel != sim_mote_get_radio_channel(source)) {
          list = list->next;
          continue;
        }
      if (!CpmModelC__shouldReceive(list->power - rcv->power)) {
          sim_log_debug(175U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC__outstandingReceptionHead[sim_node()];
  CpmModelC__outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC__allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC__sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 453
{
  int prevNode = sim_node();

#line 455
  sim_log_debug(176U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC__enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 461
{
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 463
  CpmModelC__requestAck[sim_node()] = ack;
  CpmModelC__outgoing[sim_node()] = msg;
  sim_log_debug(177U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 469
      CpmModelC__sim_gain_put(other, msg, endTime, ack && (other == dest || dest == AM_BROADCAST_ADDR), power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }
}

# 40 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC__GainRadioModel__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 40
  CpmModelC__Model__putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 40
}
#line 40
# 271 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__send_transmit_done(sim_event_t *evt)
#line 271
{
  message_t *rval = TossimPacketModelC__sending[sim_node()];

#line 273
  TossimPacketModelC__sending[sim_node()] = (void *)0;
  TossimPacketModelC__transmitting[sim_node()] = FALSE;
  sim_log_debug(190U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC__Packet__sendDone(rval, TossimPacketModelC__running[sim_node()] ? SUCCESS : EOFF);
}

#line 240
static inline int TossimPacketModelC__sim_packet_header_length(void )
#line 240
{
  return sizeof(tossim_header_t );
}

static inline void TossimPacketModelC__send_transmit(sim_event_t *evt)
#line 244
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC__getMetadata(TossimPacketModelC__sending[sim_node()]);

  duration = 8 * (TossimPacketModelC__sendingLength[sim_node()] + TossimPacketModelC__sim_packet_header_length());
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8(metadata->ack.data)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC__send_transmit_done;

  sim_log_debug(188U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC__GainRadioModel__putOnAirTo(TossimPacketModelC__destNode[sim_node()], TossimPacketModelC__sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.data), evt->time, 0.0, 0.0);
  __nesc_hton_uint8(metadata->ack.data, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(189U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);

  sim_queue_insert(evt);
}

# 207 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC__Model__clearChannel(void )
#line 207
{
  sim_log_debug(155U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC__packetNoise((void *)0), CpmModelC__clearThreshold[sim_node()]);
  return CpmModelC__packetNoise((void *)0) < CpmModelC__clearThreshold[sim_node()];
}

# 48 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC__GainRadioModel__clearChannel(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = CpmModelC__Model__clearChannel();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 203 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt)
#line 203
{
  TossimPacketModelC__backoffCount[sim_node()]++;
  if (TossimPacketModelC__GainRadioModel__clearChannel()) {
      TossimPacketModelC__neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC__neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC__neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 213
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC__transmitting[sim_node()] = TRUE;
      evt->handle = TossimPacketModelC__send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 220
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC__backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 224
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC__backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC__sending[sim_node()];

#line 234
        TossimPacketModelC__sending[sim_node()] = (void *)0;
        sim_log_debug(187U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC__Packet__sendDone(rval, EBUSY);
      }
    }
}

#line 179
static inline void TossimPacketModelC__start_csma(void )
#line 179
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 186
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(186U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC__sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC__sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC__sendEvent[sim_node()].force = 0;
  TossimPacketModelC__sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC__sendEvent[sim_node()].handle = TossimPacketModelC__send_backoff;
  TossimPacketModelC__sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC__sendEvent[sim_node()]);
}

#line 153
static inline error_t TossimPacketModelC__Packet__send(int dest, message_t *msg, uint8_t len)
#line 153
{
  if (!TossimPacketModelC__initialized[sim_node()]) {
      sim_log_error(184U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC__running[sim_node()]) {
      sim_log_error(185U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC__sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  TossimPacketModelC__sendingLength[sim_node()] = len;
  TossimPacketModelC__sending[sim_node()] = msg;
  TossimPacketModelC__destNode[sim_node()] = dest;
  TossimPacketModelC__backoffCount[sim_node()] = 0;
  TossimPacketModelC__neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC__start_csma();
  return SUCCESS;
}

# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t CC2420CsmaP__Model__send(int node, message_t *msg, uint8_t len){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = TossimPacketModelC__Packet__send(node, msg, len);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/sim/CC2420PacketBody.nc"
inline static tossim_header_t *CC2420CsmaP__CC2420PacketBody__getHeader(message_t *msg){
#line 42
  nx_struct tossim_header *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 36 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
static inline error_t CC2420CsmaP__Send__send(message_t *msg, uint8_t len)
{
  sim_log_debug(128U, "Csma", "Csma: Sending packet %p to %hu, len %d, dsn %d\n", msg, CC2420CsmaP__AMPacket__destination(msg), len, __nesc_ntoh_uint8(CC2420CsmaP__CC2420PacketBody__getHeader(msg)->dsn.data));

  return CC2420CsmaP__Model__send(CC2420CsmaP__AMPacket__destination(msg), msg, len);
}

# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t UniqueSendP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420CsmaP__Send__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/sim/CC2420PacketBody.nc"
inline static tossim_header_t *UniqueSendP__CC2420PacketBody__getHeader(message_t *msg){
#line 42
  nx_struct tossim_header *__nesc_result;
#line 42

#line 42
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 96 "/home/xinchaol/local/src/tinyos-2.x/tos/system/StateImplP.nc"
static inline error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[sim_node()][id] == StateImplP__S_IDLE) {
          StateImplP__state[sim_node()][id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/State.nc"
inline static error_t UniqueSendP__State__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 75 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  sim_log_debug(192U, "UniqueSend", "UniqueSend: Send.send: msg %p of len %d.\n", msg, len);
  if (UniqueSendP__State__requestState(UniqueSendP__S_SENDING) == SUCCESS) {
      __nesc_hton_uint8(UniqueSendP__CC2420PacketBody__getHeader(msg)->dsn.data, UniqueSendP__localSendId[sim_node()]++);

      if ((error = UniqueSendP__SubSend__send(msg, len)) != SUCCESS) {
          UniqueSendP__State__toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t TossimActiveMessageP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = UniqueSendP__Send__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 85 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__timeInMs(void )
#line 85
{
  sim_time_t ftime = sim_time();
  int hours;
#line 87
  int minutes;
#line 87
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline uint8_t SimMoteP__SimMote__getRadioChannel(void )
{
  if (SimMoteP__radioChannel[sim_node()] < 11 || SimMoteP__radioChannel[sim_node()] > 26) {
      return 26;
    }

  return SimMoteP__radioChannel[sim_node()];
}

# 181 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] >= 2) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(313U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg);
    }
}

# 99 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageP__AMSend__sendDone(am_id_t arg_0x40985a88, message_t * msg, error_t error){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x40985a88, msg, error);
#line 99
}
#line 99
# 173 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static inline void TossimActiveMessageP__SubSend__sendDone(message_t *msg, error_t error)
#line 173
{
#line 173
  TossimActiveMessageP__AMSend__sendDone(TossimActiveMessageP__AMPacket__type(msg), msg, error);
}

# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void UniqueSendP__Send__sendDone(message_t * msg, error_t error){
#line 89
  TossimActiveMessageP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 105 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error)
#line 105
{
  sim_log_debug(193U, "UniqueSend", "UniqueSend: SubSend.sendDone: msg %p, error %d.\n", msg, error);
  UniqueSendP__State__toIdle();
  UniqueSendP__Send__sendDone(msg, error);
}

# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void CC2420CsmaP__Send__sendDone(message_t * msg, error_t error){
#line 89
  UniqueSendP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 226 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__prr_estimate_from_snr(double SNR)
#line 226
{
  double beta1 = 1.3687;
  double beta2 = 0.9187;
  double SNR_lin = pow(10.0, SNR / 10.0);
  double X = fabs(SNR_lin - beta2);
  double PSE = 0.5 * erfc(beta1 * sqrt(X / 2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 233
  sim_log_debug(156U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1;
    }
  else {
#line 236
    if (prr_hat < 0) {
      prr_hat = 0;
      }
    }
#line 239
  return prr_hat;
}

# 15 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
inline static am_addr_t CC2420CsmaP__amAddress(void ){
#line 15
  unsigned short __nesc_result;
#line 15

#line 15
  __nesc_result = ActiveMessageAddressC__amAddress();
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 79 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void )
#line 79
{
#line 79
  return CC2420ControlP__autoAck[sim_node()];
}

# 110 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static bool CC2420CsmaP__CC2420Config__isAutoAckEnabled(void ){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = CC2420ControlP__CC2420Config__isAutoAckEnabled();
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 23 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
static inline tossim_header_t *CC2420CsmaP__getHeader(message_t *amsg)
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 69
static inline bool CC2420CsmaP__Model__shouldAck(message_t *msg)
{
  tossim_header_t *header = CC2420CsmaP__getHeader(msg);

#line 72
  if (!CC2420CsmaP__CC2420Config__isAutoAckEnabled()) {
      sim_log_debug(131U, "Acks", "Acks: autoAck is disabled\n");
      return FALSE;
    }
  if (__nesc_ntoh_uint16(header->dest.data) == CC2420CsmaP__amAddress()) {
      sim_log_debug(132U, "Acks", "Acks: Received packet addressed to me so ack it\n");
      return TRUE;
    }
  if (__nesc_ntoh_uint16(header->dest.data) == AM_BROADCAST_ADDR) {
      sim_log_debug(133U, "Acks", "Acks: Received broadcast packet so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 79 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC__Packet__shouldAck(message_t *msg){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = CC2420CsmaP__Model__shouldAck(msg);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 287 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__GainRadioModel__acked(message_t *msg)
#line 287
{
  if (TossimPacketModelC__running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC__getMetadata(TossimPacketModelC__sending[sim_node()]);

#line 290
      __nesc_hton_uint8(metadata->ack.data, 1);
      if (msg != TossimPacketModelC__sending[sim_node()]) {
          TossimPacketModelC__error[sim_node()] = 1;
          sim_log_debug(191U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC__sending[sim_node()]);
        }
    }
}

# 50 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC__Model__acked(message_t *msg){
#line 50
  TossimPacketModelC__GainRadioModel__acked(msg);
#line 50
}
#line 50
# 146 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__arr_estimate_from_snr(double SNR)
#line 146
{
  double beta1 = 1.3687;
  double beta2 = 0.9187;
  double SNR_lin = pow(10.0, SNR / 10.0);
  double X = fabs(SNR_lin - beta2);
  double PSE = 0.5 * erfc(beta1 * sqrt(X / 2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 153
  sim_log_debug(153U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1;
    }
  else {
#line 156
    if (prr_hat < 0) {
      prr_hat = 0;
      }
    }
#line 159
  return prr_hat;
}

static inline int CpmModelC__shouldAckReceive(double snr)
#line 162
{
  double prr = CpmModelC__arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 165
  if (prr != 0 && prr != 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 169
        prr = 0.0;
        }
    }
#line 171
  return (int )prr;
}

static inline void CpmModelC__sim_gain_ack_handle(sim_event_t *evt)
#line 174
{






  if (
#line 180
  CpmModelC__requestAck[sim_node()] && 
  CpmModelC__outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC__receive_message_t *rcv = (CpmModelC__receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC__packetNoise(rcv);
      double snr = power - noise;

#line 187
      if (CpmModelC__shouldAckReceive(snr)) {
          CpmModelC__Model__acked(CpmModelC__outgoing[sim_node()]);
        }
    }
  CpmModelC__free_receive_message((CpmModelC__receive_message_t *)evt->data);
}

# 163 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isOneShot(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num].isoneshot;
}

# 87 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool BcpForwardingEngineP__BeaconTimer__isOneShot(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isOneShot(0U);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 1081 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__BeaconTimer__fired(void )
{



  uint8_t i = 0;

#line 1087
  sim_log_debug(242U, "Beacon", "%s: BeaconTimer fired! Posting sendBeaconTask\n", __FUNCTION__);



  if (BcpForwardingEngineP__BeaconTimer__isOneShot()) {
      BcpForwardingEngineP__BeaconTimer__startPeriodic(BEACON_TIME);
    }


  if (BcpForwardingEngineP__RootControl__isRoot()) {



      if (BcpForwardingEngineP__congestNodeCount[sim_node()] >= AD_CONTROL_TRIG) {



          BcpForwardingEngineP__Valpha[sim_node()] = BcpForwardingEngineP__Valpha[sim_node()] / 2;
          BcpForwardingEngineP__VaSeq[sim_node()] = (BcpForwardingEngineP__VaSeq[sim_node()] + 1) % 0xff;
        }
      else {
#line 1106
        if (BcpForwardingEngineP__congestNodeCount[sim_node()] <= 1) {
            if (BcpForwardingEngineP__Valpha[sim_node()] < 0xff) {



                BcpForwardingEngineP__Valpha[sim_node()]++;
                BcpForwardingEngineP__VaSeq[sim_node()] = (BcpForwardingEngineP__VaSeq[sim_node()] + 1) % 0xff;
              }
          }
        }
      for (i = 0; i < CONGESTION_COUNT; i++) 
        BcpForwardingEngineP__congestNodeId[sim_node()][i] = 0;
      BcpForwardingEngineP__congestNodeCount[sim_node()] = 0;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 1121
    if (BcpForwardingEngineP__beaconSending[sim_node()] == FALSE) 
      {
        BcpForwardingEngineP__beaconSending[sim_node()] = TRUE;
      }
    else 
#line 1124
      {
        {
#line 1124
          __nesc_atomic_end(__nesc_atomic); 
#line 1124
          return;
        }
      }
#line 1126
    __nesc_atomic_end(__nesc_atomic); }
#line 1125
  BcpForwardingEngineP__sendBeaconTask__postTask();
}

# 107 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static inline void BcpRoutingEngineP__BlacklistTimer__fired(void )
{
}

# 1128 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__txRetryTimer__fired(void )
{
  if (BcpForwardingEngineP__sending[sim_node()] == FALSE) 
    {
      BcpForwardingEngineP__sending[sim_node()] = TRUE;
      BcpForwardingEngineP__sendDataTask__postTask();
    }
}

#line 1288
static inline void BcpForwardingEngineP__DelayPacketTimer__fired(void )
{
}

# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline bool /*BcpRateControllerC.modQueue*/QueueC__1__Queue__empty(void )
#line 53
{
  return /*BcpRateControllerC.modQueue*/QueueC__1__size[sim_node()] == 0;
}

# 50 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static bool BcpRateControllerP__modQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*BcpRateControllerC.modQueue*/QueueC__1__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 11 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpDebugIF.nc"
inline static void BcpRateControllerP__BcpDebugIF__reportError(uint8_t type_p){
#line 11
  BcpCollectionExampleC__BcpDebugIF__reportError(type_p);
#line 11
}
#line 11
#line 23
inline static void BcpRateControllerP__BcpDebugIF__reportValues(uint32_t field1_p, uint32_t field2_p, uint32_t field3_p, uint16_t field4_p, uint16_t field5_p, uint16_t field6_p, uint8_t field7_p, uint8_t field8_p){
#line 23
  BcpCollectionExampleC__BcpDebugIF__reportValues(field1_p, field2_p, field3_p, field4_p, field5_p, field6_p, field7_p, field8_p);
#line 23
}
#line 23
# 65 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline /*BcpRateControllerC.modQueue*/QueueC__1__queue_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__head(void )
#line 65
{
  return /*BcpRateControllerC.modQueue*/QueueC__1__queue[sim_node()][/*BcpRateControllerC.modQueue*/QueueC__1__head[sim_node()]];
}

# 73 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static BcpRateControllerP__modQueue__t  BcpRateControllerP__modQueue__head(void ){
#line 73
  nx_struct message_t *__nesc_result;
#line 73

#line 73
  __nesc_result = /*BcpRateControllerC.modQueue*/QueueC__1__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static error_t BcpRateControllerP__modPool__put(BcpRateControllerP__modPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 85 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline /*BcpRateControllerC.modQueue*/QueueC__1__queue_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__dequeue(void )
#line 85
{
  /*BcpRateControllerC.modQueue*/QueueC__1__queue_t t = /*BcpRateControllerC.modQueue*/QueueC__1__Queue__head();

#line 87
  sim_log_debug(336U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*BcpRateControllerC.modQueue*/QueueC__1__size[sim_node()]);
  if (!/*BcpRateControllerC.modQueue*/QueueC__1__Queue__empty()) {
      /*BcpRateControllerC.modQueue*/QueueC__1__head[sim_node()]++;
      if (/*BcpRateControllerC.modQueue*/QueueC__1__head[sim_node()] == 6) {
#line 90
        /*BcpRateControllerC.modQueue*/QueueC__1__head[sim_node()] = 0;
        }
#line 91
      /*BcpRateControllerC.modQueue*/QueueC__1__size[sim_node()]--;
      /*BcpRateControllerC.modQueue*/QueueC__1__printQueue();
    }
  return t;
}

# 81 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static BcpRateControllerP__modQueue__t  BcpRateControllerP__modQueue__dequeue(void ){
#line 81
  nx_struct message_t *__nesc_result;
#line 81

#line 81
  __nesc_result = /*BcpRateControllerC.modQueue*/QueueC__1__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 236 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static inline void BcpRateControllerP__SubSend__sendDone(
#line 232
message_t * msg, 



error_t error)
#line 236
{

  if (msg != BcpRateControllerP__modQueue__head()) {

      sim_log_debug(324U, "RateControl_Error", "%s: Subsending sendDone Error.\n", __FUNCTION__);
      BcpRateControllerP__BcpDebugIF__reportError(0x7a);
      return;
    }
  else 
#line 243
    {

      BcpRateControllerP__modQueue__dequeue();
    }

  if (BcpRateControllerP__modPool__put(msg) != SUCCESS) {

      sim_log_debug(325U, "RateControl_Error", "%s: Subsending memory leak.\n", __FUNCTION__);
      BcpRateControllerP__BcpDebugIF__reportError(0x7b);
    }
}

# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void BcpForwardingEngineP__Send__sendDone(message_t * msg, error_t error){
#line 89
  BcpRateControllerP__SubSend__sendDone(msg, error);
#line 89
}
#line 89
# 859 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline uint8_t BcpForwardingEngineP__Send__maxPayloadLength(void )
{
  return BcpForwardingEngineP__Packet__maxPayloadLength();
}

#line 738
static inline error_t BcpForwardingEngineP__Send__send(message_t *msg, uint8_t len)
{

  bcp_data_header_t *hdr;
  uint32_t arrivalTime = BcpForwardingEngineP__DelayPacketTimer__getNow();
  error_t retVal;

  sim_log_debug(221U, "Forwarder", "%s: sending packet: %x, len %hhu\n", __FUNCTION__, msg, len);
  if (!BcpForwardingEngineP__running[sim_node()]) {
#line 746
      return EOFF;
    }
#line 747
  if (len > BcpForwardingEngineP__Send__maxPayloadLength()) {
#line 747
      return ESIZE;
    }
  BcpForwardingEngineP__Packet__setPayloadLength(msg, len);
  hdr = BcpForwardingEngineP__getHeader(msg);
  __nesc_hton_uint8(hdr->hopCount.data, 0);
  __nesc_hton_uint16(hdr->origin.data, TOS_NODE_ID);
  __nesc_hton_uint8(hdr->originSeqNo.data, BcpForwardingEngineP__seqno[sim_node()]++);
  __nesc_hton_uint32(hdr->bcpDelay.data, 0);
  __nesc_hton_uint16(hdr->txCount.data, 0);
  __nesc_hton_uint8(hdr->pktType.data, PKT_NORMAL);


  BcpForwardingEngineP__conditionalFQDiscard();

  if (BcpForwardingEngineP__MessagePool__empty()) {
      sim_log_debug(222U, "Forwarder", "%s client cannot enqueue, message pool empty.\n", __FUNCTION__);
      BcpForwardingEngineP__BcpDebugIF__reportError(0x5d);
      return EBUSY;
    }
  else {
#line 766
    if (BcpForwardingEngineP__QEntryPool__empty()) {
        sim_log_debug(223U, "Forwarder", "%s client cannot enqueue, queue entry pool empty.\n", __FUNCTION__);

        BcpForwardingEngineP__BcpDebugIF__reportError(0x5f);
        return EBUSY;
      }
    else {
        message_t *newMsg;
        fe_queue_entry_t *qe;

        qe = BcpForwardingEngineP__QEntryPool__get();
        if (qe == (void *)0) {
            sim_log_debug(224U, "ERROR", "%s client cannot enqueue, QEntryPool.get() error.", __FUNCTION__);
            BcpForwardingEngineP__BcpDebugIF__reportError(0x5b);
            return FAIL;
          }

        newMsg = BcpForwardingEngineP__MessagePool__get();
        if (newMsg == (void *)0) {
            sim_log_debug(225U, "ERROR", "%s client cannot enqueue, MessagePool.get() error.", __FUNCTION__);


            if (BcpForwardingEngineP__QEntryPool__put(qe) != SUCCESS) {
                BcpForwardingEngineP__BcpDebugIF__reportError(0x5c);
                sim_log_debug(226U, "ERROR", "%s memory leak, QEntryPool.put() error.", __FUNCTION__);
              }

            BcpForwardingEngineP__BcpDebugIF__reportError(0x5d);
            return FAIL;
          }

        memset(newMsg, 0, sizeof(message_t ));
        memset(msg->metadata, 0, sizeof(message_metadata_t ));


        memcpy(newMsg, msg, sizeof(message_t ));

        qe->msg = newMsg;
        qe->source = LOCAL_SEND;
        qe->arrivalTime = arrivalTime;
        qe->txCount = 0;
        qe->firstTxTime = 0;
        qe->bcpArrivalDelay = 0;



        retVal = BcpForwardingEngineP__SendStack__pushTop(qe);






        if (retVal == SUCCESS) {
            BcpForwardingEngineP__BcpDebugIF__reportBackpressure(BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()], BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()] + BcpForwardingEngineP__virtualQueueSize[sim_node()], BcpForwardingEngineP__localTXCount[sim_node()], __nesc_ntoh_uint16(hdr->origin.data), __nesc_ntoh_uint8(hdr->originSeqNo.data), 2);
            sim_log_debug(227U, "Forwarder", "%s client queued packet %p with queue size %hhu\n", __FUNCTION__, msg, BcpForwardingEngineP__SendStack__size());

            BcpForwardingEngineP__forwarderActivity();

            BcpForwardingEngineP__Send__sendDone(msg, SUCCESS);


            return SUCCESS;
          }
        else 
#line 829
          {
            BcpForwardingEngineP__BcpDebugIF__reportError(0x4a);

            if (BcpForwardingEngineP__MessagePool__put(newMsg) != SUCCESS) {
                sim_log_debug(228U, "ERROR", "%s memory leak, MessagePool.put() error.", __FUNCTION__);
                BcpForwardingEngineP__BcpDebugIF__reportError(0x5c);
              }
            if (BcpForwardingEngineP__QEntryPool__put(qe) != SUCCESS) {
                sim_log_debug(229U, "ERROR", "%s memory leak, QEntryPool.put() error.", __FUNCTION__);
                BcpForwardingEngineP__BcpDebugIF__reportError(0x5d);
              }
          }
      }
    }




  sim_log_debug(230U, "ERROR", "%s client cannot send, resource acquisition problem.", __FUNCTION__);
  BcpForwardingEngineP__BcpDebugIF__reportError(0x4b);

  return FAIL;
}

# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t BcpRateControllerP__SubSend__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = BcpForwardingEngineP__Send__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t BcpRateControllerP__subPacket__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = BcpForwardingEngineP__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 255 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static inline void BcpRateControllerP__admissionTimer__fired(void )
{
  error_t err;
  uint8_t payloadLen = 0;

  if (BcpRateControllerP__modQueue__empty()) {

      BcpRateControllerP__BcpDebugIF__reportError(0x7e);
      return;
    }

  payloadLen = BcpRateControllerP__subPacket__payloadLength(BcpRateControllerP__modQueue__head());




  err = BcpRateControllerP__SubSend__send(BcpRateControllerP__modQueue__head(), payloadLen);

  if (err) {
      sim_log_debug(326U, "RateControl_Error", "%s: Subsending Error.\n", __FUNCTION__);
      BcpRateControllerP__BcpDebugIF__reportValues(0, 0, 0, 0, 0, 0, err, 0x7c);
      BcpRateControllerP__BcpDebugIF__reportError(0x7c);
    }



  if (!BcpRateControllerP__modQueue__empty()) {
      BcpRateControllerP__startAdmissionTimer();
    }
}

# 450 "BcpCollectionExampleC.nc"
static inline void BcpCollectionExampleC__Send__sendDone(message_t *msg, error_t error)
{
  sim_log_debug(64U, "Source", "SendDone called.\n");
}

# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void BcpRateControllerP__Send__sendDone(message_t * msg, error_t error){
#line 89
  BcpCollectionExampleC__Send__sendDone(msg, error);
#line 89
}
#line 89
# 81 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static bool BcpRateControllerP__admissionTimer__isRunning(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(3U);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 61 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static inline uint8_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__maxSize(void )
#line 61
{
  return 6;
}

#line 57
static inline uint8_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__size(void )
#line 57
{
  return /*BcpRateControllerC.modQueue*/QueueC__1__size[sim_node()];
}

#line 97
static inline error_t /*BcpRateControllerC.modQueue*/QueueC__1__Queue__enqueue(/*BcpRateControllerC.modQueue*/QueueC__1__queue_t newVal)
#line 97
{
  if (/*BcpRateControllerC.modQueue*/QueueC__1__Queue__size() < /*BcpRateControllerC.modQueue*/QueueC__1__Queue__maxSize()) {
      sim_log_debug(337U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*BcpRateControllerC.modQueue*/QueueC__1__size[sim_node()]);
      /*BcpRateControllerC.modQueue*/QueueC__1__queue[sim_node()][/*BcpRateControllerC.modQueue*/QueueC__1__tail[sim_node()]] = newVal;
      /*BcpRateControllerC.modQueue*/QueueC__1__tail[sim_node()]++;
      if (/*BcpRateControllerC.modQueue*/QueueC__1__tail[sim_node()] == 6) {
#line 102
        /*BcpRateControllerC.modQueue*/QueueC__1__tail[sim_node()] = 0;
        }
#line 103
      /*BcpRateControllerC.modQueue*/QueueC__1__size[sim_node()]++;
      /*BcpRateControllerC.modQueue*/QueueC__1__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Queue.nc"
inline static error_t BcpRateControllerP__modQueue__enqueue(BcpRateControllerP__modQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*BcpRateControllerC.modQueue*/QueueC__1__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 88 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline /*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool_t */*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__get(void )
#line 88
{
  if (/*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[sim_node()]) {
      /*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool_t *rval = /*BcpRateControllerC.modPool.PoolP*/PoolP__3__queue[sim_node()][/*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[sim_node()]];

#line 91
      /*BcpRateControllerC.modPool.PoolP*/PoolP__3__queue[sim_node()][/*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[sim_node()]] = (void *)0;
      /*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[sim_node()]--;
      /*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[sim_node()]++;
      if (/*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[sim_node()] == 6) {
          /*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[sim_node()] = 0;
        }
      sim_log_debug(329U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static BcpRateControllerP__modPool__t * BcpRateControllerP__modPool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 75 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline bool /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__empty(void )
#line 75
{
  sim_log_debug(327U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[sim_node()]);
  return /*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[sim_node()] == 0;
}

# 61 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Pool.nc"
inline static bool BcpRateControllerP__modPool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 145 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static inline error_t BcpRateControllerP__Send__send(
#line 137
message_t * msg, 







uint8_t len)
#line 145
{
  error_t retVal;
  message_t *poolMsg;








  if (BcpRateControllerP__modPool__empty()) {

      return EBUSY;
    }
  else 
#line 159
    {
      poolMsg = BcpRateControllerP__modPool__get();
    }


  memcpy(poolMsg, msg, sizeof(message_t ));


  retVal = BcpRateControllerP__modQueue__enqueue(poolMsg);
  if (retVal != SUCCESS) {
      BcpRateControllerP__BcpDebugIF__reportError(0x77);
      sim_log_debug(323U, "RateControl_Error", "%s: Cannot Enqueue.\n", __FUNCTION__);

      BcpRateControllerP__modPool__put(poolMsg);
      return FAIL;
    }

  if (!BcpRateControllerP__admissionTimer__isRunning()) {

      BcpRateControllerP__startAdmissionTimer();
    }
  BcpRateControllerP__Send__sendDone(msg, SUCCESS);
  return SUCCESS;
}

# 64 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t BcpCollectionExampleC__Send__send(message_t * msg, uint8_t len){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = BcpRateControllerP__Send__send(msg, len);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 57 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static am_addr_t BcpCollectionExampleC__AMPacket__address(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = TossimActiveMessageP__AMPacket__address();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 1148 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__BcpPacket__setOrigin(message_t *msg, am_addr_t addr)
#line 1148
{
#line 1148
  __nesc_hton_uint16(BcpForwardingEngineP__getHeader(msg)->origin.data, addr);
}

# 44 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpPacket.nc"
inline static void BcpCollectionExampleC__BcpPacket__setOrigin(message_t *msg, am_addr_t addr){
#line 44
  BcpForwardingEngineP__BcpPacket__setOrigin(msg, addr);
#line 44
}
#line 44
# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void BcpCollectionExampleC__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  BcpForwardingEngineP__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
#line 115
inline static void * BcpCollectionExampleC__Packet__getPayload(message_t * msg, uint8_t len){
#line 115
  void *__nesc_result;
#line 115

#line 115
  __nesc_result = BcpForwardingEngineP__Packet__getPayload(msg, len);
#line 115

#line 115
  return __nesc_result;
#line 115
}
#line 115
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpPacket.nc"
inline static uint8_t BcpCollectionExampleC__BcpPacket__getSequenceNumber(message_t *msg){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = BcpForwardingEngineP__BcpPacket__getSequenceNumber(msg);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 126 "BcpCollectionExampleC.nc"
static inline void BcpCollectionExampleC__sendMessage(void )
#line 126
{
  BcpCollectionExampleC__BCPMsg *newBCPMsg;
  error_t err;
  message_t *messagePtr;
  UartPacket *uartPacketPtr;





  sim_log_debug(49U, "Source", "Forming a packet\n");

  sim_log_debug(50U, "TotalDelay", "Sending <from,data,seqNo>=<%hhu,%u,%u>@%u ms\n", BcpCollectionExampleC__AMPacket__address(), BcpCollectionExampleC__count[sim_node()], BcpCollectionExampleC__BcpPacket__getSequenceNumber(&BcpCollectionExampleC__packet[sim_node()]), BcpCollectionExampleC__Timer__getNow());



  newBCPMsg = BcpCollectionExampleC__Packet__getPayload(&BcpCollectionExampleC__packet[sim_node()], sizeof(BcpCollectionExampleC__BCPMsg ));
  BcpCollectionExampleC__Packet__setPayloadLength(&BcpCollectionExampleC__packet[sim_node()], sizeof(BcpCollectionExampleC__BCPMsg ));

  BcpCollectionExampleC__BcpPacket__setOrigin(&BcpCollectionExampleC__packet[sim_node()], BcpCollectionExampleC__AMPacket__address());



  __nesc_hton_uint32(newBCPMsg->data.data, BcpCollectionExampleC__count[sim_node()]);

  sim_log_debug(51U, "Source", "Sending Message.\n");
  err = BcpCollectionExampleC__Send__send(&BcpCollectionExampleC__packet[sim_node()], sizeof(BcpCollectionExampleC__BCPMsg ));
  if (err) {
      sim_log_debug(52U, "Source", "Unable to send the packet, error %hu.\n", err);
      if (err == EOFF) {
        sim_log_debug(53U, "Source", "Radio is off for client?\n");
        }
      messagePtr = BcpCollectionExampleC__SafeSerialSendIF__getMessageBuffer();
      if (messagePtr != 0) 
        {
          uartPacketPtr = (UartPacket *)BcpCollectionExampleC__SafeSerialSendIF__getPayload(messagePtr, sizeof(UartPacket ));
          if (uartPacketPtr != 0) 
            {
              __nesc_hton_uint8(uartPacketPtr->type.data, 0x08);
              __nesc_hton_uint32(uartPacketPtr->field1.data, BcpCollectionExampleC__count[sim_node()]);
              __nesc_hton_uint32(uartPacketPtr->field2.data, 0);
              __nesc_hton_uint32(uartPacketPtr->field3.data, 0);
              __nesc_hton_uint16(uartPacketPtr->field4.data, 0);
              __nesc_hton_uint16(uartPacketPtr->field5.data, 0);
              __nesc_hton_uint16(uartPacketPtr->field6.data, 0);
              __nesc_hton_uint8(uartPacketPtr->field7.data, 0);
              __nesc_hton_uint8(uartPacketPtr->field8.data, err);
              __nesc_hton_uint32(uartPacketPtr->time.data, BcpCollectionExampleC__Timer__getNow());
              sim_log_debug(54U, "Serial", "%s:generated a serial packet notifying of packet admission failure.\n", __FUNCTION__);
              BcpCollectionExampleC__SafeSerialSendIF__queueMessageBuffer(messagePtr);
            }
          else 
#line 176
            {
#line 176
              sim_log_debug(55U, "Error", "%s:uartPacketPtr is NULL! Packet size error?\n", __FUNCTION__);
            }
        }
      else 
#line 177
        {
#line 177
          sim_log_debug(56U, "Error", "%s:messagePtr is NULL! Packet size error?\n", __FUNCTION__);
        }
    }
  else 
#line 178
    {

      messagePtr = BcpCollectionExampleC__SafeSerialSendIF__getMessageBuffer();
      if (messagePtr != 0) 
        {
          uartPacketPtr = (UartPacket *)BcpCollectionExampleC__SafeSerialSendIF__getPayload(messagePtr, sizeof(UartPacket ));
          if (uartPacketPtr != 0) 
            {
              __nesc_hton_uint8(uartPacketPtr->type.data, 0x02);
              __nesc_hton_uint32(uartPacketPtr->field1.data, BcpCollectionExampleC__count[sim_node()]);
              __nesc_hton_uint32(uartPacketPtr->field2.data, 0);
              __nesc_hton_uint32(uartPacketPtr->field3.data, 0);
              __nesc_hton_uint16(uartPacketPtr->field4.data, 0);
              __nesc_hton_uint16(uartPacketPtr->field5.data, 0);
              __nesc_hton_uint16(uartPacketPtr->field6.data, 0);
              __nesc_hton_uint8(uartPacketPtr->field7.data, 0);
              __nesc_hton_uint8(uartPacketPtr->field8.data, 0);
              __nesc_hton_uint32(uartPacketPtr->time.data, BcpCollectionExampleC__Timer__getNow());
              sim_log_debug(57U, "Serial", "%s:generated a serial packet notifying of packet admission.\n", __FUNCTION__);
              BcpCollectionExampleC__SafeSerialSendIF__queueMessageBuffer(messagePtr);
            }
          else 
#line 198
            {
#line 198
              sim_log_debug(58U, "Error", "%s:uartPacketPtr is NULL! Packet size error?\n", __FUNCTION__);
            }
        }
      else 
#line 199
        {
#line 199
          sim_log_debug(59U, "Error", "%s:messagePtr is NULL! Packet size error!\n", __FUNCTION__);
        }
#line 200
      BcpCollectionExampleC__count[sim_node()]++;
    }
}

# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint32_t /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__subRandom__rand32(void ){
#line 35
  unsigned int __nesc_result;
#line 35

#line 35
  __nesc_result = RandomMlcgC__Random__rand32();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 21 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/exponentialRandomM.nc"
static inline uint32_t /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__Random__rand32(void )
{
  uint32_t num_iterations = 0;
  uint32_t init_rand_instance = 0;
#line 24
  uint32_t curr_rand_instance = 0;
  uint32_t exp_rand_variable = 0;
  bool done = FALSE;

  while (!done) 
    {
      num_iterations = 1;

      init_rand_instance = /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__subRandom__rand32();
      curr_rand_instance = init_rand_instance;
      while (curr_rand_instance <= init_rand_instance) 
        {
          curr_rand_instance = /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__subRandom__rand32();
          num_iterations++;
        }

      if (num_iterations % 2 > 0) 
        {



          exp_rand_variable++;
        }
      else 
#line 46
        {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 47
            {


              exp_rand_variable *= /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__mean_m[sim_node()];



              exp_rand_variable += init_rand_instance % /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__mean_m[sim_node()];
            }
#line 55
            __nesc_atomic_end(__nesc_atomic); }
          done = TRUE;
        }
    }

  return exp_rand_variable;
}

# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint32_t BcpCollectionExampleC__Random__rand32(void ){
#line 35
  unsigned int __nesc_result;
#line 35

#line 35
  __nesc_result = /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__Random__rand32();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 397 "BcpCollectionExampleC.nc"
static inline void BcpCollectionExampleC__Timer__fired(void )
#line 397
{
  uint32_t r = BcpCollectionExampleC__Random__rand32();



  BcpCollectionExampleC__Timer__startOneShot(r);

  BcpCollectionExampleC__sendMessage();
}

# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/RootControl.nc"
inline static error_t BcpCollectionExampleC__RootControl__unsetRoot(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = BcpRoutingEngineP__RootControl__unsetRoot();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
#line 41
inline static error_t BcpCollectionExampleC__RootControl__setRoot(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = BcpRoutingEngineP__RootControl__setRoot();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 204 "BcpCollectionExampleC.nc"
static inline void BcpCollectionExampleC__sinkTimer__fired(void )
#line 204
{
  BcpCollectionExampleC__testTime[sim_node()]++;

  if (TOS_NODE_ID == 1) {
    BcpCollectionExampleC__RootControl__setRoot();
    }
  else 
#line 209
    {
      BcpCollectionExampleC__RootControl__unsetRoot();
    }
}

# 193 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x40e96868){
#line 72
  switch (arg_0x40e96868) {
#line 72
    case 0U:
#line 72
      BcpForwardingEngineP__BeaconTimer__fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      BcpForwardingEngineP__txRetryTimer__fired();
#line 72
      BcpRoutingEngineP__BlacklistTimer__fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      BcpForwardingEngineP__DelayPacketTimer__fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      BcpRateControllerP__admissionTimer__fired();
#line 72
      break;
#line 72
    case 4U:
#line 72
      BcpCollectionExampleC__Timer__fired();
#line 72
      break;
#line 72
    case 5U:
#line 72
      BcpCollectionExampleC__sinkTimer__fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x40e96868);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 1298 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline uint16_t BcpForwardingEngineP__getBackpressure__get(void )
{
  return BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()] + BcpForwardingEngineP__virtualQueueSize[sim_node()];
}

# 55 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Get.nc"
inline static BcpRateControllerP__getBackpressure__val_t BcpRateControllerP__getBackpressure__get(void ){
#line 55
  unsigned short __nesc_result;
#line 55

#line 55
  __nesc_result = BcpForwardingEngineP__getBackpressure__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static inline uint16_t BcpRateControllerP__fourthRoot(uint32_t A_p)
{
  uint16_t retVal = 2;
  uint32_t retValCubed = 0;
  uint8_t count = 0;

  sim_log_debug(314U, "fourthRoot", "%s: Calculating fourthRoot of %u.\n", __FUNCTION__, A_p);
  if (A_p == 0) {
    return 0;
    }
  for (count = 0; count < 10; count++) {
      sim_log_debug(315U, "fourthRoot", "%s: Calculating fourthRoot, interation %hhu.\n", __FUNCTION__, count);
      retValCubed = (uint32_t )retVal * (uint32_t )retVal * (uint32_t )retVal;
      retVal = (3 * retVal + A_p / retValCubed) >> 2;
      sim_log_debug(316U, "fourthRoot", "%s: Calculating fourthRoot, retVal %u.\n", __FUNCTION__, retVal);
    }
  return retVal;
}

# 10 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/exponentialRandomM.nc"
static inline void /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__setMean__set(uint32_t mean_p)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 12
    {
      /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__mean_m[sim_node()] = mean_p;
    }
#line 14
    __nesc_atomic_end(__nesc_atomic); }
}

# 55 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Set.nc"
inline static void BcpRateControllerP__setMean__set(BcpRateControllerP__setMean__val_t val){
#line 55
  /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__setMean__set(val);
#line 55
}
#line 55
# 62 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void BcpRateControllerP__admissionTimer__startOneShot(uint32_t dt){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 62
}
#line 62
# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint32_t /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__subRandom__rand32(void ){
#line 35
  unsigned int __nesc_result;
#line 35

#line 35
  __nesc_result = RandomMlcgC__Random__rand32();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 21 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/exponentialRandomM.nc"
static inline uint32_t /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__Random__rand32(void )
{
  uint32_t num_iterations = 0;
  uint32_t init_rand_instance = 0;
#line 24
  uint32_t curr_rand_instance = 0;
  uint32_t exp_rand_variable = 0;
  bool done = FALSE;

  while (!done) 
    {
      num_iterations = 1;

      init_rand_instance = /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__subRandom__rand32();
      curr_rand_instance = init_rand_instance;
      while (curr_rand_instance <= init_rand_instance) 
        {
          curr_rand_instance = /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__subRandom__rand32();
          num_iterations++;
        }

      if (num_iterations % 2 > 0) 
        {



          exp_rand_variable++;
        }
      else 
#line 46
        {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 47
            {


              exp_rand_variable *= /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__mean_m[sim_node()];



              exp_rand_variable += init_rand_instance % /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__mean_m[sim_node()];
            }
#line 55
            __nesc_atomic_end(__nesc_atomic); }
          done = TRUE;
        }
    }

  return exp_rand_variable;
}

# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint32_t BcpRateControllerP__exponentialRandom__rand32(void ){
#line 35
  unsigned int __nesc_result;
#line 35

#line 35
  __nesc_result = /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__Random__rand32();
#line 35

#line 35
  return __nesc_result;
#line 35
}
#line 35
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 45
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 45
}
#line 45
# 52 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = HplAtm128Timer0AsyncP__Timer0__get();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 561 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 561
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 569 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__cancel_compare(void )
#line 569
{
  sim_log_debug(308U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP__compare[sim_node()]);
  if (HplAtm128Timer0AsyncP__compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP__compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 108
static inline void HplAtm128Timer0AsyncP__notify_changed(void )
#line 108
{
  uint8_t newScale = HplAtm128Timer0AsyncP__Timer0__getScale();

#line 110
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP__oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP__lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP__oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP__schedule_new_compare();
}

#line 537
static inline void HplAtm128Timer0AsyncP__cancel_overflow(void )
#line 537
{
  if (HplAtm128Timer0AsyncP__overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__overflow[sim_node()]->cancelled = 1;
      sim_log_debug(307U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP__overflow[sim_node()]);
      HplAtm128Timer0AsyncP__overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 473
static inline void HplAtm128Timer0AsyncP__timer0_overflow_handle(sim_event_t *evt)
#line 473
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(304U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(305U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP__configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void )
#line 492
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP__timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 526
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void )
#line 526
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP__allocate_overflow();

#line 528
  HplAtm128Timer0AsyncP__configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP__overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__cancel_overflow();
    }
  HplAtm128Timer0AsyncP__overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 140
static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t)
#line 140
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP__notify_clockTicksPerSec();
  return t;
}

#line 289
static inline void HplAtm128Timer0AsyncP__Timer0__set(uint8_t newVal)
#line 289
{
  uint8_t curVal = HplAtm128Timer0AsyncP__Timer0__get();

#line 291
  sim_log_debug(297U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 297
      adjustment = adjustment << HplAtm128Timer0AsyncP__shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP__clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP__lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP__lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP__schedule_new_overflow();
      HplAtm128Timer0AsyncP__notify_changed();
    }
}

#line 179
static inline void HplAtm128Timer0AsyncP__timer0_compare_handle(sim_event_t *evt)
#line 179
{
  sim_log_debug(287U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 186
      sim_print_now(timeStr, 128);
      sim_log_debug(288U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(289U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP__Timer0__set(0);
        }
      else {
          sim_log_debug(290U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(291U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(292U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(293U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP__configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void )
#line 215
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 217
  sim_log_debug(294U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP__timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 61 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer0__overflow(void ){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 61
}
#line 61
# 47 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 71 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 71
}
#line 71
# 79 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 79
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 39 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 149 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 49
}
#line 49
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 70 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 67
}
#line 67
# 68 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/StackC.nc"
static inline /*BcpC.SendStack*/StackC__0__stack_t /*BcpC.SendStack*/StackC__0__Stack__top(void )
#line 68
{
  return /*BcpC.SendStack*/StackC__0__stack[sim_node()][/*BcpC.SendStack*/StackC__0__top[sim_node()]];
}

# 83 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 83
  TossimActiveMessageP__Packet__setPayloadLength(msg, len);
#line 83
}
#line 83
# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC__startDoneTask__postTask(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(TossimPacketModelC__startDoneTask);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get(void )
#line 45
{
#line 45
  return (atm128RegFile[sim_node()][27U] & (1 << 0)) != 0;
}

# 32 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led2__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void )
#line 45
{
#line 45
  return (atm128RegFile[sim_node()][27U] & (1 << 1)) != 0;
}

# 32 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led1__get(void ){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get();
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 42 "/home/xinchaol/local/src/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)&atm128RegFile[sim_node()][0x35] = 1 << SE;
  }
}

# 38 "/home/xinchaol/local/src/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__SubInit__default__init(void )
#line 38
{
  return SUCCESS;
}

# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MotePlatformP__SubInit__default__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 50 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 50
{
#line 50
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 30 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 30
}
#line 30
# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 53
{
#line 53
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 33 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 33
}
#line 33
# 26 "/home/xinchaol/local/src/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 26
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 46 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 46
{
  sim_log_debug(70U, "Pins", "Setting bit %i of port %i.\n", (int )0, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 0;
}

# 29 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 29
}
#line 29
# 46 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 46
{
  sim_log_debug(71U, "Pins", "Setting bit %i of port %i.\n", (int )1, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 1;
}

# 29 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 29
}
#line 29
# 54 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 0;
}

# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 35
}
#line 35
# 54 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 1;
}

# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 35
}
#line 35
# 54 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 54
{
#line 54
  atm128RegFile[sim_node()][26U] |= 1 << 2;
}

# 35 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 35
}
#line 35
# 45 "/home/xinchaol/local/src/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    sim_log_debug(135U, "Init", "LEDS: initialized.\n");
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = LedsP__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 21 "/home/xinchaol/local/src/tinyos-2.x/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 21
{
  return SUCCESS;
}

# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = MeasureClockC__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t SimMainP__PlatformInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PlatformP__Init__init();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 54 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool SimMainP__Scheduler__runNextTask(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = SimSchedulerBasicP__Scheduler__runNextTask();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 20 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/control/sim/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
{
  CC2420ControlP__channel[sim_node()] = 26;




  CC2420ControlP__autoAck[sim_node()] = TRUE;





  CC2420ControlP__hwAutoAck[sim_node()] = FALSE;


  return SUCCESS;
}

# 78 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__Init__init(void )
#line 78
{
  sim_log_debug(179U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC__initialized[sim_node()] = TRUE;



  TossimPacketModelC__sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 78 "/home/xinchaol/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 78
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 41 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Random.nc"
inline static uint16_t UniqueSendP__Random__rand16(void ){
#line 41
  unsigned short __nesc_result;
#line 41

#line 41
  __nesc_result = RandomMlcgC__Random__rand16();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 62 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline error_t UniqueSendP__Init__init(void )
#line 62
{
  UniqueSendP__localSendId[sim_node()] = UniqueSendP__Random__rand16();
  return SUCCESS;
}

# 81 "/home/xinchaol/local/src/tinyos-2.x/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 2U; i++) {
      StateImplP__state[sim_node()][i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 44 "/home/xinchaol/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgC__seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 71 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline error_t UniqueReceiveP__Init__init(void )
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP__receivedMessages[sim_node()][i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP__receivedMessages[sim_node()][i].dsn = 0;
    }
  return SUCCESS;
}

# 101 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static uint8_t /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__maxPayloadLength(void ){
#line 101
  unsigned char __nesc_result;
#line 101

#line 101
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(1U);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 61 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__maxPayloadLength(void )
#line 61
{
  return /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__maxPayloadLength();
}

# 112 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static uint8_t BcpForwardingEngineP__BeaconSend__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__maxPayloadLength();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 81 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static inline void *TossimActiveMessageP__AMSend__getPayload(am_id_t id, message_t *m, uint8_t len)
#line 81
{
#line 81
  return TossimActiveMessageP__Packet__getPayload(m, len);
}

# 124 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(am_id_t arg_0x40f1a908, message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = TossimActiveMessageP__AMSend__getPayload(arg_0x40f1a908, msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 203 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 203
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(0, m, len);
}

# 114 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Send.nc"
inline static void * /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(message_t * msg, uint8_t len){
#line 114
  void *__nesc_result;
#line 114

#line 114
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(1U, msg, len);
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 65 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline void */*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(message_t *m, uint8_t len)
#line 65
{
  return /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(m, len);
}

# 124 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void * BcpForwardingEngineP__BeaconSend__getPayload(message_t * msg, uint8_t len){
#line 124
  void *__nesc_result;
#line 124

#line 124
  __nesc_result = /*BcpC.BeaconSend.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(msg, len);
#line 124

#line 124
  return __nesc_result;
#line 124
}
#line 124
# 190 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static inline void BcpForwardingEngineP__latestForwardedTableInit(void )
{
  BcpForwardingEngineP__latestForwardedTableActive[sim_node()] = 0;
}

#line 714
static inline error_t BcpForwardingEngineP__Init__init(void )
{

  BcpForwardingEngineP__beaconSending[sim_node()] = FALSE;
  BcpForwardingEngineP__running[sim_node()] = FALSE;
  BcpForwardingEngineP__sending[sim_node()] = FALSE;
  BcpForwardingEngineP__radioOn[sim_node()] = FALSE;
  BcpForwardingEngineP__seqno[sim_node()] = 0;
  BcpForwardingEngineP__nullSeqNo[sim_node()] = 0;
  BcpForwardingEngineP__latestForwardedTableInit();
  BcpForwardingEngineP__beaconHdr[sim_node()] = BcpForwardingEngineP__BeaconSend__getPayload(&BcpForwardingEngineP__beaconMsgBuffer[sim_node()], BcpForwardingEngineP__BeaconSend__maxPayloadLength());
  BcpForwardingEngineP__dataCRCSuccessCount[sim_node()] = 0;
  BcpForwardingEngineP__dataCRCFailCount[sim_node()] = 0;
  BcpForwardingEngineP__snoopCRCSuccessCount[sim_node()] = 0;
  BcpForwardingEngineP__snoopCRCFailCount[sim_node()] = 0;
  BcpForwardingEngineP__sendQeOccupied[sim_node()] = FALSE;
  BcpForwardingEngineP__virtualQueueSize[sim_node()] = 0;
  BcpForwardingEngineP__localTXCount[sim_node()] = 0;
  BcpForwardingEngineP__loopbackMsgPtr[sim_node()] = &BcpForwardingEngineP__loopbackMsg[sim_node()];
  BcpForwardingEngineP__notifyBurstyLinkNeighbor_m[sim_node()] = TOS_NODE_ID;
  sim_log_debug(220U, "Forwarder_", "%s: SubPacket max payload:%hhu, BcpPacketHeader Length:%hhu.\n ", __FUNCTION__, BcpForwardingEngineP__SubPacket__maxPayloadLength(), (uint8_t )sizeof(bcp_data_header_t ));
  return SUCCESS;
}

# 54 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static inline void BcpRoutingEngineP__routingTableInit(void )
{
  BcpRoutingEngineP__routingTableActive[sim_node()] = 0;
}

#line 24
static inline error_t BcpRoutingEngineP__Init__init(void )
#line 24
{
  BcpRoutingEngineP__running[sim_node()] = FALSE;
  BcpRoutingEngineP__state_is_root[sim_node()] = FALSE;
  BcpRoutingEngineP__routingTableInit();
  sim_log_debug(248U, "Routing", "%s: TreeRouting initialized.\n", __FUNCTION__);
  return SUCCESS;
}

# 65 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 17; i++) {
      /*BcpC.MessagePoolP.PoolP*/PoolP__0__queue[sim_node()][i] = &/*BcpC.MessagePoolP.PoolP*/PoolP__0__pool[sim_node()][i];
    }
  /*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()] = 17;
  /*BcpC.MessagePoolP.PoolP*/PoolP__0__index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*BcpC.QEntryPoolP.PoolP*/PoolP__1__queue[sim_node()][i] = &/*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool[sim_node()][i];
    }
  /*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()] = 12;
  /*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*BcpC.SnoopPoolP.PoolP*/PoolP__2__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 5; i++) {
      /*BcpC.SnoopPoolP.PoolP*/PoolP__2__queue[sim_node()][i] = &/*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool[sim_node()][i];
    }
  /*BcpC.SnoopPoolP.PoolP*/PoolP__2__free[sim_node()] = 5;
  /*BcpC.SnoopPoolP.PoolP*/PoolP__2__index[sim_node()] = 0;
  return SUCCESS;
}

# 439 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 439
{
#line 439
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 56 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 56
  HplAtm128Timer0AsyncP__Compare__start();
#line 56
}
#line 56
# 356 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t x)
#line 356
{
  sim_log_debug(299U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 37 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 37
  HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(control);
#line 37
}
#line 37
# 553 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 553
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 65 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static inline error_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 6; i++) {
      /*BcpRateControllerC.modPool.PoolP*/PoolP__3__queue[sim_node()][i] = &/*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool[sim_node()][i];
    }
  /*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[sim_node()] = 6;
  /*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 20; i++) {
      /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__queue[sim_node()][i] = &/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool[sim_node()][i];
    }
  /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[sim_node()] = 20;
  /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[sim_node()] = 0;
  return SUCCESS;
}

# 51 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t SimMainP__SoftwareInit__init(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__Init__init();
#line 51
  __nesc_result = ecombine(__nesc_result, /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*BcpC.SnoopPoolP.PoolP*/PoolP__2__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, /*BcpC.MessagePoolP.PoolP*/PoolP__0__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, BcpRoutingEngineP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, BcpForwardingEngineP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, UniqueReceiveP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, UniqueSendP__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC__Init__init());
#line 51
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 127 "SafeSerialSendM.nc"
static inline error_t SafeSerialSendM__StdControl__start(void )
#line 127
{
  SafeSerialSendM__sending_m[sim_node()] = FALSE;
  SafeSerialSendM__serialRunning_m[sim_node()] = FALSE;
  SafeSerialSendM__overflowCount_m[sim_node()] = 0;

  SafeSerialSendM__SerialControl__start();
  return SUCCESS;
}

# 74 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t BcpCollectionExampleC__SerialControl__start(void ){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = SafeSerialSendM__StdControl__start();
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 59 "BcpCollectionExampleC.nc"
static inline void BcpCollectionExampleC__Boot__booted(void )
#line 59
{
  sim_log_debug(46U, "Boot", "Application has booted.\n");


  if (TOS_NODE_ID == 1) {
    BcpCollectionExampleC__RootControl__setRoot();
    }
  else 
#line 65
    {
      BcpCollectionExampleC__RootControl__unsetRoot();
    }
  BcpCollectionExampleC__RadioControl__start();
  BcpCollectionExampleC__SerialControl__start();
}

# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void SimMainP__Boot__booted(void ){
#line 49
  BcpCollectionExampleC__Boot__booted();
#line 49
}
#line 49
# 54 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel)
{
  if (newRadioChannel >= 11 && newRadioChannel <= 26) {
      SimMoteP__radioChannel[sim_node()] = newRadioChannel;
      return SUCCESS;
    }

  return FAIL;
}

#line 100
static inline long long int SimMoteP__SimMote__getEuid(void )
#line 100
{
  return SimMoteP__euid[sim_node()];
}

#line 103
static inline void SimMoteP__SimMote__setEuid(long long int e)
#line 103
{
  SimMoteP__euid[sim_node()] = e;
}







static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size)
#line 113
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 130
static inline void SimMoteP__SimMote__turnOff(void )
#line 130
{
  SimMoteP__isOn[sim_node()] = FALSE;
}

#line 202
static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e)
#line 202
{
  char buf[128];

#line 204
  sim_print_now(buf, 128);

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(127U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP__SimMote__turnOn();
}

# 38 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 38
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 42
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 238 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 238
{
  va_list args;
  int i;

#line 241
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 246
      __builtin_va_start(args, format);
      fprintf(file, "%s DEBUG (%i): ", sim_time_string(), (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 76
static void fillInOutput(int id, char *name)
#line 76
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 81
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, namePos);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, namePos);
      if (channel != (void *)0) {
          int i;
#line 129
          int j;

#line 130
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 176 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  char *sim_time_string()
#line 176
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

#line 171
  int sim_print_now(char *buf, int len)
#line 171
{
  return sim_print_time(buf, len, sim_time());
}

#line 148
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 148
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

#line 109
  sim_time_t sim_ticks_per_sec()
#line 109
{
  return 10000000000ULL;
}

#line 102
  sim_time_t sim_time()
#line 102
{
  return sim_ticks;
}








  unsigned long sim_node()
#line 113
{
  return current_node;
}

# 186 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 186
{
  int parent_index;

#line 188
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 147
static void swap(node_t *first, node_t *second)
#line 147
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 47 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 47
{
  long long int key;

#line 49
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 103 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 103
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 106
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 160
static void down_heap(heap_t *heap, int findex)
#line 160
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 174
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 179
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 52 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 52
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 56
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 66
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 71
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 76
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 82
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 49
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 57
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 226 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 226
{
  int i;

#line 228
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 59 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;
  int i;



  for (j = 0; j < 1000; j++) {
      for (i = 0; i < 16; i++) {
          noiseData[j].noiseGenTime[i] = 0;
          noiseData[j].key[i] = (char *)malloc(NOISE_HISTORY);
        }
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 94 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 94
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 72
  void sim_end()
#line 72
{
  sim_queue_init();
}



  int sim_random()
#line 78
{
  uint32_t mlcg;
#line 79
  uint32_t p;
#line 79
  uint32_t q;
  uint64_t tmpseed;

#line 81
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}

#line 105
  void sim_set_time(sim_time_t t)
#line 105
{
  sim_ticks = t;
}








  void sim_set_node(unsigned long node)
#line 116
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 121
{
  bool result = FALSE;

#line 123
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 125
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 179 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 179
{
  bool result;
  int tmp = sim_node();

#line 182
  sim_set_node(mote);
  result = SimMoteP__SimMote__isOn();
  sim_set_node(tmp);
  return result;
}

# 268 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 268
{
  va_list args;
  int i;

#line 271
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 276
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 181 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_add_channel(char *channel, FILE *file)
#line 181
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 185
{
  return sim_log_remove_channel(channel, file);
}

# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 49
{
  return csmaInitHigh;
}

#line 52
  int sim_csma_init_low()
#line 52
{
  return csmaInitLow;
}

#line 55
  int sim_csma_high()
#line 55
{
  return csmaHigh;
}

#line 58
  int sim_csma_low()
#line 58
{
  return csmaLow;
}

#line 61
  int sim_csma_symbols_per_sec()
#line 61
{
  return csmaSymbolsPerSec;
}

#line 64
  int sim_csma_bits_per_symbol()
#line 64
{
  return csmaBitsPerSymbol;
}

#line 67
  int sim_csma_preamble_length()
#line 67
{
  return csmaPreambleLength;
}

#line 70
  int sim_csma_exponent_base()
#line 70
{
  return csmaExponentBase;
#line 71
  ;
}

#line 73
  int sim_csma_max_iterations()
#line 73
{
  return csmaMaxIterations;
}

#line 76
  int sim_csma_min_free_samples()
#line 76
{
  return csmaMinFreeSamples;
}

#line 79
  int sim_csma_rxtx_delay()
#line 79
{
  return csmaRxTxDelay;
}

#line 82
  int sim_csma_ack_time()
#line 82
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 88
{
  csmaInitHigh = val;
}

#line 91
  void sim_csma_set_init_low(int val)
#line 91
{
  csmaInitLow = val;
}

#line 94
  void sim_csma_set_high(int val)
#line 94
{
  csmaHigh = val;
}

#line 97
  void sim_csma_set_low(int val)
#line 97
{
  csmaLow = val;
}

#line 100
  void sim_csma_set_symbols_per_sec(int val)
#line 100
{
  csmaSymbolsPerSec = val;
}

#line 103
  void sim_csma_set_bits_per_symbol(int val)
#line 103
{
  csmaBitsPerSymbol = val;
}

#line 106
  void sim_csma_set_preamble_length(int val)
#line 106
{
  csmaPreambleLength = val;
}

#line 109
  void sim_csma_set_exponent_base(int val)
#line 109
{
  csmaExponentBase = val;
}

#line 112
  void sim_csma_set_max_iterations(int val)
#line 112
{
  csmaMaxIterations = val;
}

#line 115
  void sim_csma_set_min_free_samples(int val)
#line 115
{
  csmaMinFreeSamples = val;
}

#line 118
  void sim_csma_set_rxtx_delay(int val)
#line 118
{
  csmaRxTxDelay = val;
}

#line 121
  void sim_csma_set_ack_time(int val)
#line 121
{
  csmaAckTime = val;
}

# 16 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 80 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 80
{
  int i;

  makeNoiseModel(node_id);
  makePmfDistr(node_id);

  for (i = 1; i < 16; i++) {
      memcpy((void *)noiseData[node_id].key[i], (void *)noiseData[node_id].key[0], NOISE_HISTORY);
    }
}

#line 428
  void makeNoiseModel(uint16_t node_id)
#line 428
{
  int i;

#line 430
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[0][i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id, 11);
      noiseData[node_id].key[0][NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 115
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 118
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 146
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key[0];
  sim_noise_hash_t *noise_hash;

#line 152
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      {
        void *ckey = malloc(NOISE_HISTORY);

#line 169
        memcpy(ckey, key, NOISE_HISTORY);
        hashtable_insert(pnoiseTable, ckey, noise_hash);
      }
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 175
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 251
  void arrangeKey(uint16_t node_id, uint8_t channel)
{
  uint8_t cchannel = channel >= 11 && channel <= 26 ? channel - 11 : channel;
  char *pKey = noiseData[node_id].key[cchannel];

#line 255
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key[0];
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id, 11);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 198
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key[0];
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 207
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 221
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 241
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 99
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 99
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 104
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 125
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 128
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 295
  char sim_noise_gen(uint16_t node_id, uint8_t channel)
{
  uint8_t cchannel = channel >= 11 && channel <= 26 ? channel - 11 : channel;
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key[cchannel];
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 306
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 358
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 365
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 372 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint8_t channel, uint32_t cur_t)
#line 372
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;
  uint8_t cchannel = channel >= 11 && channel <= 26 ? channel - 11 : channel;

  prev_t = noiseData[node_id].noiseGenTime[cchannel];

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime[cchannel] = cur_t;
      noiseData[node_id].key[cchannel][cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal[cchannel] = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 397
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal[cchannel];
    }
  else 
#line 403
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id, channel);
          arrangeKey(node_id, channel);
          noiseData[node_id].key[cchannel][NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal[cchannel] = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime[cchannel] = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 253 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 253
{
  va_list args;
  int i;

#line 256
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 261
      __builtin_va_start(args, format);
      fprintf(file, "%s ERROR (%i): ", sim_time_string(), (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 46 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 46
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 48
  __nesc_hton_uint16(hdr->src.data, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 51
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 53
  return __nesc_ntoh_uint16(hdr->src.data);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 56
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 58
  __nesc_hton_uint16(hdr->dest.data, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 61
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 63
  return __nesc_ntoh_uint16(hdr->dest.data);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 66
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 68
  __nesc_hton_uint8(hdr->length.data, length);
}

#line 70
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 70
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 72
  return __nesc_ntoh_uint8(hdr->length.data);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 75
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 77
  __nesc_hton_uint8(hdr->type.data, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 80
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 82
  return __nesc_ntoh_uint8(hdr->type.data);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 85
{
  message_t *msg = (message_t *)p;

#line 87
  return (uint8_t *)& msg->data;
}

#line 89
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 89
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 92
  __nesc_hton_int8(md->strength.data, str);
}

#line 94
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 94
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 107 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
{
  sim_event_t *evt = CC2420CsmaP__allocate_deliver_event(node, msg, t);

#line 110
  sim_queue_insert(evt);
}

#line 56
static void CC2420CsmaP__Model__receive(message_t *msg)
{
  uint8_t len = CC2420CsmaP__Packet__payloadLength(msg);
  void *payload;

  memcpy(CC2420CsmaP__bufferPointer[sim_node()], msg, sizeof(message_t ));
  payload = CC2420CsmaP__Packet__getPayload(CC2420CsmaP__bufferPointer[sim_node()], len);
  sim_log_debug(130U, "Csma", "Csma: Receiving packet %p from %d in %p, len %d, dsn %d\n", msg, CC2420CsmaP__AMPacket__source(msg), CC2420CsmaP__bufferPointer[sim_node()], len, __nesc_ntoh_uint8(CC2420CsmaP__CC2420PacketBody__getHeader(msg)->dsn.data));


  CC2420CsmaP__bufferPointer[sim_node()] = CC2420CsmaP__Receive__receive(CC2420CsmaP__bufferPointer[sim_node()], payload, len);
}

# 97 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static am_addr_t TossimActiveMessageP__AMPacket__source(message_t *amsg)
{
  tossim_header_t *header = TossimActiveMessageP__getHeader(amsg);

#line 100
  return __nesc_ntoh_uint16(header->src.data);
}

#line 85
static am_addr_t TossimActiveMessageP__AMPacket__destination(message_t *amsg)
{
  tossim_header_t *header = TossimActiveMessageP__getHeader(amsg);

#line 88
  return __nesc_ntoh_uint16(header->dest.data);
}

# 53 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 53
{
  if (!ActiveMessageAddressC__set[sim_node()]) {
      ActiveMessageAddressC__addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC__set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC__addr[sim_node()];
}

# 116 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static am_id_t TossimActiveMessageP__AMPacket__type(message_t *amsg)
{
  tossim_header_t *header = TossimActiveMessageP__getHeader(amsg);

#line 119
  return __nesc_ntoh_uint8(header->type.data);
}

# 73 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static error_t BcpRoutingEngineP__routingTableUpdateEntry(am_addr_t from_p, uint16_t backpressure_p)
#line 73
{
  uint8_t idx;

  idx = BcpRoutingEngineP__routingTableFind(from_p);
  if (idx == ROUTING_TABLE_SIZE) {


      sim_log_debug(251U, "WARNING", "%s FAIL, table full\n", __FUNCTION__);
      return FAIL;
    }
  else {
#line 83
    if (idx == BcpRoutingEngineP__routingTableActive[sim_node()]) {

        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
          {
            BcpRoutingEngineP__routingTable[sim_node()][idx].neighbor = from_p;
            BcpRoutingEngineP__routingTable[sim_node()][idx].backpressure = backpressure_p;
            BcpRoutingEngineP__routingTable[sim_node()][idx].linkPacketTxTime = 1;
            BcpRoutingEngineP__routingTable[sim_node()][idx].linkETX = 100;
            BcpRoutingEngineP__routingTable[sim_node()][idx].lastTxNoStreakID = 0;
            BcpRoutingEngineP__routingTable[sim_node()][idx].txNoStreakCount = 0;
            BcpRoutingEngineP__routingTable[sim_node()][idx].isBurstyNow = 0;
            BcpRoutingEngineP__routingTableActive[sim_node()]++;
          }
#line 94
          __nesc_atomic_end(__nesc_atomic); }
        sim_log_debug(252U, "Routing", "%s OK, new entry idx %d, neighbor %hhu, backpressure %d.\n", __FUNCTION__, BcpRoutingEngineP__routingTableActive[sim_node()] - 1, from_p, backpressure_p);
      }
    else 
#line 96
      {

        BcpRoutingEngineP__routingTable[sim_node()][idx].backpressure = backpressure_p;
        sim_log_debug(253U, "Routing", "%s OK, updated entry idx %d, neighbor %hhu, backpressure %d.\n", __FUNCTION__, idx, from_p, backpressure_p);
      }
    }
#line 101
  return SUCCESS;
}

#line 61
static uint8_t BcpRoutingEngineP__routingTableFind(am_addr_t neighbor_p)
#line 61
{
  uint8_t i;

#line 63
  if (neighbor_p == 0xFFFF) {
    return BcpRoutingEngineP__routingTableActive[sim_node()];
    }
#line 65
  for (i = 0; i < BcpRoutingEngineP__routingTableActive[sim_node()]; i++) {
      if (BcpRoutingEngineP__routingTable[sim_node()][i].neighbor == neighbor_p) {
        break;
        }
    }
#line 69
  return i;
}

# 107 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static void BcpRateControllerP__BcpCongestionIF__updateRateControlInfo(uint16_t reVal, 
uint16_t reSeqNo)
#line 108
{
  if (BcpRateControllerP__seqNo[sim_node()] < reSeqNo) {

      BcpRateControllerP__Vmax[sim_node()] = reVal;
      sim_log_debug(322U, "RateControl", "%s: Update Vmax to %hu.\n", __FUNCTION__, BcpRateControllerP__Vmax[sim_node()]);
    }
}

# 161 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 274 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP__Timer0__get(void )
#line 274
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP__last_zero();

#line 277
  elapsed = HplAtm128Timer0AsyncP__sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP__shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(296U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 100
static sim_time_t HplAtm128Timer0AsyncP__last_zero(void )
#line 100
{
  if (HplAtm128Timer0AsyncP__lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP__lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP__lastZero[sim_node()];
}

# 151 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 151
{
  long long int result;
  int tmp = sim_node();

#line 154
  sim_set_node(mote);
  result = SimMoteP__SimMote__getStartTime();
  sim_set_node(tmp);
  return result;
}

# 152 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void )
#line 152
{
  uint8_t scale = HplAtm128Timer0AsyncP__Timer0__getScale();

#line 154
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 313
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void )
#line 313
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 375
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void )
#line 375
{
  Atm128_TIFR_t at;

#line 377
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 449
static uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 449
{
  sim_log_debug(302U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 544 "BcpCollectionExampleC.nc"
static void BcpCollectionExampleC__BcpDebugIF__reportError(uint8_t type_p)
{
  message_t *messagePtr;
  UartPacket *uartPacketPtr;


  messagePtr = BcpCollectionExampleC__SafeSerialSendIF__getMessageBuffer();
  if (messagePtr == 0) {
    return;
    }
#line 553
  uartPacketPtr = (UartPacket *)BcpCollectionExampleC__SafeSerialSendIF__getPayload(messagePtr, sizeof(UartPacket ));
  if (uartPacketPtr == (void *)0) {
    sim_log_debug(67U, "Error", "%s:uartPacketPtr is NULL! Packet size error?\n", __FUNCTION__);
    }
  __nesc_hton_uint8(uartPacketPtr->type.data, 0x0F);
  __nesc_hton_uint8(uartPacketPtr->field8.data, type_p);

  __nesc_hton_uint32(uartPacketPtr->time.data, BcpCollectionExampleC__Timer__getNow());

  BcpCollectionExampleC__SafeSerialSendIF__queueMessageBuffer(messagePtr);
}

# 91 "SafeSerialSendM.nc"
static message_t *SafeSerialSendM__SafeSerialSendIF__getMessageBuffer(void )
#line 91
{
  message_t *retVal;

  if (!SafeSerialSendM__MessagePool__empty()) {
      retVal = SafeSerialSendM__MessagePool__get();
    }
  else 
#line 96
    {
      retVal = 0;
      SafeSerialSendM__overflowCount_m[sim_node()]++;
    }

  return retVal;
}

static void *SafeSerialSendM__SafeSerialSendIF__getPayload(message_t *msg_p, uint8_t size_p)
#line 104
{

  sim_log_debug(341U, "Serial", "%s:getting payload of size %u\n", __FUNCTION__, size_p);
  SafeSerialSendM__UartPacket__setPayloadLength(msg_p, size_p);
  return SafeSerialSendM__UartPacket__getPayload(msg_p, size_p);
}

# 125 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t BcpCollectionExampleC__Timer__getNow(void ){
#line 125
  unsigned int __nesc_result;
#line 125

#line 125
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(4U);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 113 "SafeSerialSendM.nc"
static void SafeSerialSendM__SafeSerialSendIF__queueMessageBuffer(message_t *sendMsg_p)
{
  if (sendMsg_p == 0 || SafeSerialSendM__SendQueue__maxSize() == SafeSerialSendM__SendQueue__size()) {
#line 115
      return;
    }
#line 116
  SafeSerialSendM__SendQueue__enqueue(sendMsg_p);
  SafeSerialSendM__sendTask__postTask();
}

# 197 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  error_t result;

#line 200
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    {
      result = SimSchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(122U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(123U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 69
static void SimSchedulerBasicP__sim_scheduler_submit_event(void )
#line 69
{
  if (SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP__sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP__sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 149 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static uint32_t BcpForwardingEngineP__calcHdrChecksum(message_t *msg)
{
  uint32_t checksum = 0;
  bcp_data_header_t *hdr;

  hdr = BcpForwardingEngineP__getHeader(msg);


  checksum += __nesc_ntoh_uint32(hdr->bcpDelay.data);
  checksum += __nesc_ntoh_uint16(hdr->bcpBackpressure.data);
  checksum += __nesc_ntoh_uint16(hdr->txCount.data);
  checksum += __nesc_ntoh_uint16(hdr->origin.data);
  checksum += __nesc_ntoh_uint8(hdr->hopCount.data);
  checksum += __nesc_ntoh_uint8(hdr->originSeqNo.data);
  checksum += __nesc_ntoh_uint8(hdr->pktType.data);

  return checksum;
}

# 597 "BcpCollectionExampleC.nc"
static void BcpCollectionExampleC__BcpDebugIF__reportValues(uint32_t field1_p, uint32_t field2_p, uint32_t field3_p, uint16_t field4_p, 
uint16_t field5_p, uint16_t field6_p, uint8_t field7_p, uint8_t field8_p)
{
  message_t *messagePtr;
  UartPacket *uartPacketPtr;


  messagePtr = BcpCollectionExampleC__SafeSerialSendIF__getMessageBuffer();
  if (messagePtr == 0) {
    return;
    }
#line 607
  uartPacketPtr = (UartPacket *)BcpCollectionExampleC__SafeSerialSendIF__getPayload(messagePtr, sizeof(UartPacket ));
  if (uartPacketPtr == 0) {
    sim_log_debug(69U, "Error", "%s:uartPacketPtr is NULL! Packet size error?\n", __FUNCTION__);
    }
#line 610
  __nesc_hton_uint8(uartPacketPtr->type.data, 0x10);
  __nesc_hton_uint32(uartPacketPtr->field1.data, field1_p);
  __nesc_hton_uint32(uartPacketPtr->field2.data, field2_p);
  __nesc_hton_uint32(uartPacketPtr->field3.data, field3_p);
  __nesc_hton_uint16(uartPacketPtr->field4.data, field4_p);
  __nesc_hton_uint16(uartPacketPtr->field5.data, field5_p);
  __nesc_hton_uint16(uartPacketPtr->field6.data, field6_p);
  __nesc_hton_uint8(uartPacketPtr->field7.data, field7_p);
  __nesc_hton_uint8(uartPacketPtr->field8.data, field8_p);

  __nesc_hton_uint32(uartPacketPtr->time.data, BcpCollectionExampleC__Timer__getNow());

  BcpCollectionExampleC__SafeSerialSendIF__queueMessageBuffer(messagePtr);
}

# 199 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static latestForwarded_table_entry *BcpForwardingEngineP__latestForwardedTableFind(am_addr_t neighbor_p)
#line 199
{
  uint8_t i;

#line 201
  if (neighbor_p == 0xFFFF) {
    return (void *)0;
    }
#line 203
  for (i = 0; i < BcpForwardingEngineP__latestForwardedTableActive[sim_node()]; i++) {
      if (BcpForwardingEngineP__latestForwardedTable[sim_node()][i].neighbor == neighbor_p) {
        break;
        }
    }
  if (i == BcpForwardingEngineP__latestForwardedTableActive[sim_node()]) {
    return (void *)0;
    }
  return &BcpForwardingEngineP__latestForwardedTable[sim_node()][i];
}

static error_t BcpForwardingEngineP__latestForwardedTableUpdate(am_addr_t from_p, am_addr_t origin_p, 
uint8_t originSeqNo_p, uint8_t hopCount_p)
{
  latestForwarded_table_entry *latestForwardedEntry;

  latestForwardedEntry = BcpForwardingEngineP__latestForwardedTableFind(from_p);
  if (latestForwardedEntry == (void *)0 && 
  BcpForwardingEngineP__latestForwardedTableActive[sim_node()] == ROUTING_TABLE_SIZE) 
    {

      sim_log_debug(198U, "ERROR", "%s: latestForwardedTable full, can't insert new neighbor.\n", __FUNCTION__);
      BcpForwardingEngineP__BcpDebugIF__reportError(0x38);
      return FAIL;
    }
  else {
#line 228
    if (latestForwardedEntry == (void *)0) {

        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 230
          {
            BcpForwardingEngineP__latestForwardedTable[sim_node()][BcpForwardingEngineP__latestForwardedTableActive[sim_node()]].neighbor = from_p;
            BcpForwardingEngineP__latestForwardedTable[sim_node()][BcpForwardingEngineP__latestForwardedTableActive[sim_node()]].origin = origin_p;
            BcpForwardingEngineP__latestForwardedTable[sim_node()][BcpForwardingEngineP__latestForwardedTableActive[sim_node()]].originSeqNo = originSeqNo_p;
            BcpForwardingEngineP__latestForwardedTable[sim_node()][BcpForwardingEngineP__latestForwardedTableActive[sim_node()]].hopCount = hopCount_p;
            BcpForwardingEngineP__latestForwardedTableActive[sim_node()]++;
          }
#line 236
          __nesc_atomic_end(__nesc_atomic); }
        sim_log_debug(199U, "Duplicate", "%s: OK, new latestForwarded idx %d neighbor %hhu <%hhu,%d,%d>.\n", __FUNCTION__, BcpForwardingEngineP__latestForwardedTableActive[sim_node()] - 1, from_p, origin_p, originSeqNo_p, hopCount_p);
      }
    else 
#line 238
      {

        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 240
          {
            latestForwardedEntry->origin = origin_p;
            latestForwardedEntry->originSeqNo = originSeqNo_p;
            latestForwardedEntry->hopCount = hopCount_p;
          }
#line 244
          __nesc_atomic_end(__nesc_atomic); }
        sim_log_debug(200U, "Duplicate", "%s OK, updated entry neighbor %hhu <%hhu,%d,%d>.\n", __FUNCTION__, from_p, origin_p, originSeqNo_p, hopCount_p);
      }
    }
#line 247
  return SUCCESS;
}

# 408 "BcpCollectionExampleC.nc"
static message_t *BcpCollectionExampleC__Receive__receive(message_t *msg, void *payload, uint8_t len)
#line 408
{
  message_t *messagePtr;
  UartPacket *uartPacketPtr;

  BcpCollectionExampleC__BCPMsg *myBCPMsg = (BcpCollectionExampleC__BCPMsg *)payload;

  sim_log_debug(60U, "Root", "Received a packet at the application layer from %d, data %d, seqNo %d, age %d, hopCount %d, txCount %u\n", BcpCollectionExampleC__BcpPacket__getOrigin(msg), __nesc_ntoh_uint32(myBCPMsg->data.data), BcpCollectionExampleC__BcpPacket__getSequenceNumber(msg), BcpCollectionExampleC__BcpPacket__getDelay(msg), BcpCollectionExampleC__BcpPacket__getHopCount(msg), BcpCollectionExampleC__BcpPacket__getTxCount(msg));
  sim_log_debug(61U, "TotalDelay", "Received <from,data,seqNo>=<%hhu,%u,%u,%u>@%u ms\n", BcpCollectionExampleC__BcpPacket__getOrigin(msg), __nesc_ntoh_uint32(myBCPMsg->data.data), BcpCollectionExampleC__BcpPacket__getSequenceNumber(msg), BcpCollectionExampleC__BcpPacket__getDelay(msg), BcpCollectionExampleC__Timer__getNow());





  messagePtr = BcpCollectionExampleC__SafeSerialSendIF__getMessageBuffer();
  if (messagePtr == 0) {
    return msg;
    }
#line 424
  uartPacketPtr = (UartPacket *)BcpCollectionExampleC__SafeSerialSendIF__getPayload(messagePtr, sizeof(UartPacket ));
  if (uartPacketPtr == (void *)0) {
    sim_log_debug(62U, "Error", "%s:uartPacketPtr is NULL! Packet size error?\n", __FUNCTION__);
    }
#line 427
  __nesc_hton_uint8(uartPacketPtr->type.data, 0x01);
  __nesc_hton_uint32(uartPacketPtr->field1.data, __nesc_ntoh_uint32(myBCPMsg->data.data));

  __nesc_hton_uint32(uartPacketPtr->field2.data, BcpCollectionExampleC__BcpPacket__getDelay(msg));
  __nesc_hton_uint16(uartPacketPtr->field4.data, BcpCollectionExampleC__BcpPacket__getTxCount(msg));
  __nesc_hton_uint16(uartPacketPtr->field6.data, BcpCollectionExampleC__BcpPacket__getBCPPktType(msg));
  __nesc_hton_uint8(uartPacketPtr->field7.data, BcpCollectionExampleC__BcpPacket__getHopCount(msg));
  __nesc_hton_uint8(uartPacketPtr->field8.data, BcpCollectionExampleC__BcpPacket__getOrigin(msg));







  __nesc_hton_uint32(uartPacketPtr->time.data, BcpCollectionExampleC__Timer__getNow());

  sim_log_debug(63U, "Serial", "%s:generated a serial packet notifying of packet reception.\n", __FUNCTION__);
  BcpCollectionExampleC__SafeSerialSendIF__queueMessageBuffer(messagePtr);

  return msg;
}

# 1145 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static am_addr_t BcpForwardingEngineP__BcpPacket__getOrigin(message_t *msg)
#line 1145
{
#line 1145
  return (am_addr_t )__nesc_ntoh_uint16(BcpForwardingEngineP__getHeader(msg)->origin.data);
}

#line 1146
static uint8_t BcpForwardingEngineP__BcpPacket__getSequenceNumber(message_t *msg)
#line 1146
{
#line 1146
  return (uint8_t )__nesc_ntoh_uint8(BcpForwardingEngineP__getHeader(msg)->originSeqNo.data);
}


static uint32_t BcpForwardingEngineP__BcpPacket__getDelay(message_t *msg)
#line 1150
{
#line 1150
  return __nesc_ntoh_uint32(BcpForwardingEngineP__getHeader(msg)->bcpDelay.data);
}


static uint8_t BcpForwardingEngineP__BcpPacket__getHopCount(message_t *msg)
#line 1154
{
#line 1154
  return __nesc_ntoh_uint8(BcpForwardingEngineP__getHeader(msg)->hopCount.data);
}

#line 1151
static uint16_t BcpForwardingEngineP__BcpPacket__getTxCount(message_t *msg)
#line 1151
{
#line 1151
  return __nesc_ntoh_uint16(BcpForwardingEngineP__getHeader(msg)->txCount.data);
}

#line 991
static void *BcpForwardingEngineP__Packet__getPayload(message_t *msg, uint8_t len)
#line 991
{
  uint8_t *payload = BcpForwardingEngineP__SubPacket__getPayload(msg, len + (uint8_t )sizeof(bcp_data_header_t ));

#line 993
  if (payload != (void *)0) {
      payload = payload + (uint8_t )sizeof(bcp_data_header_t );
    }
  return payload;
}

# 67 "/home/xinchaol/local/src/tinyos-2.x/tos/interfaces/Packet.nc"
static uint8_t BcpForwardingEngineP__SubPacket__payloadLength(message_t * msg){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = TossimActiveMessageP__Packet__payloadLength(msg);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 168 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static void BcpForwardingEngineP__conditionalFQDiscard(void )
{
  fe_queue_entry_t *discardQe;

#line 171
  if (BcpForwardingEngineP__SendStack__size() != BcpForwardingEngineP__QEntryPool__maxSize() - BcpForwardingEngineP__QEntryPool__size()) {
    BcpForwardingEngineP__BcpDebugIF__reportError(0x3a);
    }
#line 173
  if (BcpForwardingEngineP__SendStack__size() == BcpForwardingEngineP__SendStack__maxSize()) {
      discardQe = BcpForwardingEngineP__SendStack__popBottom();
      if (BcpForwardingEngineP__MessagePool__put(discardQe->msg) != SUCCESS) {
          BcpForwardingEngineP__BcpDebugIF__reportError(0x59);
          sim_log_debug(196U, "ERROR", "%s memory leak, MessagePool.put() error.", __FUNCTION__);
        }
      if (BcpForwardingEngineP__QEntryPool__put(discardQe) != SUCCESS) {
          BcpForwardingEngineP__BcpDebugIF__reportError(0x39);
          sim_log_debug(197U, "ERROR", "%s memory leak, QEntryPool.put() error.", __FUNCTION__);
        }


      BcpForwardingEngineP__virtualQueueSize[sim_node()]++;
    }
}

# 79 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static uint8_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__size(void )
#line 79
{
  sim_log_debug(264U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()]);
  return /*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()];
}

#line 103
static error_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__put(/*BcpC.MessagePoolP.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()] >= 17) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*BcpC.MessagePoolP.PoolP*/PoolP__0__index[sim_node()] + /*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()];

#line 109
      if (emptyIndex >= 17) {
          emptyIndex -= 17;
        }
      /*BcpC.MessagePoolP.PoolP*/PoolP__0__queue[sim_node()][emptyIndex] = newVal;
      /*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()]++;
      sim_log_debug(262U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()]);
      return SUCCESS;
    }
}

#line 103
static error_t /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__put(/*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()] >= 12) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[sim_node()] + /*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()];

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*BcpC.QEntryPoolP.PoolP*/PoolP__1__queue[sim_node()][emptyIndex] = newVal;
      /*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()]++;
      sim_log_debug(266U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()]);
      return SUCCESS;
    }
}

#line 75
static bool /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void )
#line 75
{
  sim_log_debug(259U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()]);
  return /*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()] == 0;
}

#line 75
static bool /*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void )
#line 75
{
  sim_log_debug(263U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()]);
  return /*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()] == 0;
}









static /*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool_t */*BcpC.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()]) {
      /*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool_t *rval = /*BcpC.QEntryPoolP.PoolP*/PoolP__1__queue[sim_node()][/*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[sim_node()]];

#line 91
      /*BcpC.QEntryPoolP.PoolP*/PoolP__1__queue[sim_node()][/*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[sim_node()]] = (void *)0;
      /*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()]--;
      /*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[sim_node()]++;
      if (/*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[sim_node()] == 12) {
          /*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[sim_node()] = 0;
        }
      sim_log_debug(265U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

#line 88
static /*BcpC.MessagePoolP.PoolP*/PoolP__0__pool_t */*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()]) {
      /*BcpC.MessagePoolP.PoolP*/PoolP__0__pool_t *rval = /*BcpC.MessagePoolP.PoolP*/PoolP__0__queue[sim_node()][/*BcpC.MessagePoolP.PoolP*/PoolP__0__index[sim_node()]];

#line 91
      /*BcpC.MessagePoolP.PoolP*/PoolP__0__queue[sim_node()][/*BcpC.MessagePoolP.PoolP*/PoolP__0__index[sim_node()]] = (void *)0;
      /*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()]--;
      /*BcpC.MessagePoolP.PoolP*/PoolP__0__index[sim_node()]++;
      if (/*BcpC.MessagePoolP.PoolP*/PoolP__0__index[sim_node()] == 17) {
          /*BcpC.MessagePoolP.PoolP*/PoolP__0__index[sim_node()] = 0;
        }
      sim_log_debug(261U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 112 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/StackC.nc"
static error_t /*BcpC.SendStack*/StackC__0__Stack__pushTop(/*BcpC.SendStack*/StackC__0__stack_t newVal)
#line 112
{
  sim_log_debug(273U, "StackC", "%s: size is %hhu\n", __FUNCTION__, /*BcpC.SendStack*/StackC__0__size[sim_node()]);

  if (/*BcpC.SendStack*/StackC__0__size[sim_node()] == 11) {
    return FAIL;
    }
  if (/*BcpC.SendStack*/StackC__0__size[sim_node()] > 0) 
    {
      if (/*BcpC.SendStack*/StackC__0__top[sim_node()] == 11 - 1) {
        /*BcpC.SendStack*/StackC__0__top[sim_node()] = 0;
        }
      else {
#line 123
        /*BcpC.SendStack*/StackC__0__top[sim_node()]++;
        }
    }
  /*BcpC.SendStack*/StackC__0__stack[sim_node()][/*BcpC.SendStack*/StackC__0__top[sim_node()]] = newVal;
  /*BcpC.SendStack*/StackC__0__size[sim_node()]++;
  return SUCCESS;
}

# 518 "BcpCollectionExampleC.nc"
static void BcpCollectionExampleC__BcpDebugIF__reportBackpressure(uint32_t dataQueueSize_p, uint32_t virtualQueueSize_p, uint16_t localTXCount_p, uint8_t origin_p, uint8_t originSeqNo_p, uint8_t reportSource_p)
{
  message_t *messagePtr;
  UartPacket *uartPacketPtr;


  messagePtr = BcpCollectionExampleC__SafeSerialSendIF__getMessageBuffer();
  if (messagePtr == 0) {
    return;
    }
#line 527
  uartPacketPtr = (UartPacket *)BcpCollectionExampleC__SafeSerialSendIF__getPayload(messagePtr, sizeof(UartPacket ));
  if (uartPacketPtr == (void *)0) {
    sim_log_debug(66U, "Error", "%s:uartPacketPtr is NULL! Packet size error?\n", __FUNCTION__);
    }
#line 530
  __nesc_hton_uint8(uartPacketPtr->type.data, 0x03);
  __nesc_hton_uint32(uartPacketPtr->field1.data, dataQueueSize_p);
  __nesc_hton_uint32(uartPacketPtr->field2.data, virtualQueueSize_p);
  __nesc_hton_uint32(uartPacketPtr->field3.data, localTXCount_p);
  __nesc_hton_uint16(uartPacketPtr->field6.data, origin_p);
  __nesc_hton_uint8(uartPacketPtr->field7.data, originSeqNo_p);
  __nesc_hton_uint8(uartPacketPtr->field8.data, reportSource_p);


  __nesc_hton_uint32(uartPacketPtr->time.data, BcpCollectionExampleC__Timer__getNow());

  BcpCollectionExampleC__SafeSerialSendIF__queueMessageBuffer(messagePtr);
}

# 550 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static void BcpForwardingEngineP__forwarderActivity(void )
{
  if (!BcpForwardingEngineP__running[sim_node()]) 
    {

      return;
    }
  else {
#line 557
    if (BcpForwardingEngineP__RootControl__isRoot()) 
      {

        BcpForwardingEngineP__virtualQueueSize[sim_node()] = 0;


        if (!BcpForwardingEngineP__BeaconTimer__isRunning()) {


            BcpForwardingEngineP__BeaconTimer__startOneShot(FAST_BEACON_TIME);
          }


        if (!BcpForwardingEngineP__SendStack__empty()) {

            BcpForwardingEngineP__sendDataTask__postTask();
          }

        return;
      }
    else {
#line 577
      if (BcpForwardingEngineP__sending[sim_node()]) {
          sim_log_debug(210U, "Forwarder", "%s: already sending, exit\n", __FUNCTION__);
          return;
        }
      else {
#line 581
        if ((!BcpForwardingEngineP__SendStack__empty() || BcpForwardingEngineP__virtualQueueSize[sim_node()] > 0) || BcpForwardingEngineP__sendQeOccupied[sim_node()]) 
          {

            BcpForwardingEngineP__BeaconTimer__stop();


            BcpForwardingEngineP__sending[sim_node()] = TRUE;
            BcpForwardingEngineP__sendDataTask__postTask();

            return;
          }
        else 
          {

            BcpForwardingEngineP__BeaconTimer__startPeriodic(BEACON_TIME);
          }
        }
      }
    }
}

# 148 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

#line 133
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

#line 136
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static void /*BcpC.SnoopQueue*/QueueC__0__printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(275U, "QueueC", "head <-");
  for (i = /*BcpC.SnoopQueue*/QueueC__0__head[sim_node()]; i < /*BcpC.SnoopQueue*/QueueC__0__head[sim_node()] + /*BcpC.SnoopQueue*/QueueC__0__size[sim_node()]; i++) {
      sim_log_debug_clear(276U, "QueueC", "[");
      for (j = 0; j < sizeof(/*BcpC.SnoopQueue*/QueueC__0__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*BcpC.SnoopQueue*/QueueC__0__queue[sim_node()][i % 5])[j];

#line 77
          sim_log_debug_clear(277U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(278U, "QueueC", "] ");
    }
  sim_log_debug_clear(279U, "QueueC", "<- tail\n");
}

# 102 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 102
{
  return 28;
}

  sim_packet_t *sim_packet_allocate()
#line 106
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 110
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

  void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn)
#line 115
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 117
  __nesc_hton_uint8(hdr->dsn.data, dsn);
}

  uint8_t sim_packet_dsn(sim_packet_t *msg)
#line 120
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 122
  return __nesc_ntoh_uint8(hdr->dsn.data);
}

# 43 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 43
{
  char timeBuf[128];

#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    {






      SimMainP__Scheduler__init();





      SimMainP__PlatformInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;





      SimMainP__SoftwareInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;
    }
#line 67
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(118U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP__Boot__booted();





  return 0;
}

# 172 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

#line 175
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP__popTask();
      if (nextTask == SimSchedulerBasicP__NO_TASK) 
        {
          sim_log_debug(120U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 181
            FALSE;

            {
#line 181
              __nesc_atomic_end(__nesc_atomic); 
#line 181
              return __nesc_temp;
            }
          }
        }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
#line 184
  sim_log_debug(121U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

# 1169 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpForwardingEngineP.nc"
static void BcpForwardingEngineP__BeaconSend__sendDone(message_t *msg, error_t error)
{
  if ((message_t *)msg != &BcpForwardingEngineP__beaconMsgBuffer[sim_node()]) 
    {
      sim_log_debug(243U, "Beacon", "%s: Yikes! BeaconSend.sendDone received a message pointer not its own!\n", __FUNCTION__);
      BcpForwardingEngineP__BcpDebugIF__reportError(0x83);
    }
  else 
    {
      sim_log_debug(244U, "Beacon", "%s: BeaconSend.sendDone() called successfully.\n", __FUNCTION__);
      BcpForwardingEngineP__beaconSending[sim_node()] = FALSE;
    }
}

#line 1009
static void BcpForwardingEngineP__SubSend__sendDone(message_t *msg, error_t error)
#line 1009
{
  uint16_t txTimeMS = 0;
  uint32_t nowTime = 0;
  fe_queue_entry_t *qe = BcpForwardingEngineP__sendQe[sim_node()];
  bcp_data_header_t *sentPacket;

  sim_log_debug(235U, "Forwarder", "%s: to %hu and %hhu\n", __FUNCTION__, BcpForwardingEngineP__AMDataPacket__destination(msg), error);
  if (qe == (void *)0 || qe->msg != msg) {
      sim_log_debug(236U, "ERROR", "%s: BUG: not our packet (%p != %p)!\n", __FUNCTION__, msg, qe->msg);
      BcpForwardingEngineP__BcpDebugIF__reportError(0x30);
      return;
    }

  sentPacket = BcpForwardingEngineP__getHeader(msg);

  if (error != SUCCESS) {



      sim_log_debug(237U, "Forwarder", "%s: send failed, retrying immediately.\n", __FUNCTION__);
      BcpForwardingEngineP__sendDataTask__postTask();
    }
  else {

    if (!BcpForwardingEngineP__DataPacketAcknowledgements__wasAcked(msg)) {
        BcpForwardingEngineP__RouterForwarderIF__txNoAck(BcpForwardingEngineP__AMDataPacket__destination(msg));
        sim_log_debug(238U, "Forwarder", "%s: not acked, re-posting sendTask.\n", __FUNCTION__);

        BcpForwardingEngineP__BcpCongestionIF__congestionNotify();
        BcpForwardingEngineP__sendDataTask__postTask();
      }
    else 

      {


        BcpForwardingEngineP__BcpCongestionIF__noCongestionNotify();
        sim_log_debug(239U, "Forwarder", "%s: successfully forwarded packet (client: %hhu), message pool is %hhu/%hhu, SendStack is %hhu/%hhu.\n", __FUNCTION__, qe->source, BcpForwardingEngineP__MessagePool__size(), BcpForwardingEngineP__MessagePool__maxSize(), BcpForwardingEngineP__SendStack__size(), BcpForwardingEngineP__SendStack__maxSize());




        nowTime = BcpForwardingEngineP__DelayPacketTimer__getNow();
        if (nowTime - qe->firstTxTime > 0xFFFF) {
          txTimeMS = 0xFFFF;
          }
        else {
#line 1055
          txTimeMS = (uint16_t )(nowTime - qe->firstTxTime);
          }
        BcpForwardingEngineP__RouterForwarderIF__updateLinkSuccess(BcpForwardingEngineP__AMDataPacket__destination(msg), qe->txCount);
        BcpForwardingEngineP__RouterForwarderIF__updateLinkRate(BcpForwardingEngineP__AMDataPacket__destination(qe->msg), txTimeMS);

        if (BcpForwardingEngineP__MessagePool__put(qe->msg) != SUCCESS) 
          {
            BcpForwardingEngineP__BcpDebugIF__reportError(0x37);
            sim_log_debug(240U, "ERROR", "%s: Memory leak, failed MessagePool.put().\n", __FUNCTION__);
          }
        if (BcpForwardingEngineP__QEntryPool__put(qe) != SUCCESS) 
          {
            BcpForwardingEngineP__BcpDebugIF__reportError(0x38);
            sim_log_debug(241U, "ERROR", "%s: Memory leak, failed QEntryPool.put().\n", __FUNCTION__);
          }


        BcpForwardingEngineP__sendQeOccupied[sim_node()] = FALSE;
        BcpForwardingEngineP__sending[sim_node()] = FALSE;

        BcpForwardingEngineP__BcpDebugIF__reportBackpressure(BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()], BcpForwardingEngineP__SendStack__size() + BcpForwardingEngineP__sendQeOccupied[sim_node()] + BcpForwardingEngineP__virtualQueueSize[sim_node()], BcpForwardingEngineP__localTXCount[sim_node()], __nesc_ntoh_uint16(BcpForwardingEngineP__getHeader(msg)->origin.data), __nesc_ntoh_uint8(BcpForwardingEngineP__getHeader(msg)->originSeqNo.data), 1);

        BcpForwardingEngineP__forwarderActivity();
      }
    }
}

# 79 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static uint8_t /*BcpC.MessagePoolP.PoolP*/PoolP__0__Pool__size(void )
#line 79
{
  sim_log_debug(260U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()]);
  return /*BcpC.MessagePoolP.PoolP*/PoolP__0__free[sim_node()];
}

# 224 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static void BcpRoutingEngineP__RouterForwarderIF__updateLinkSuccess(am_addr_t neighbor_p, uint8_t txCount_p)
{
  uint32_t newETX;
  uint16_t oldETX;
  uint8_t idx;

  idx = BcpRoutingEngineP__routingTableFind(neighbor_p);
  if (idx == BcpRoutingEngineP__routingTableActive[sim_node()]) {

      BcpRoutingEngineP__BcpDebugIF__reportError(0x58);
      return;
    }

  oldETX = BcpRoutingEngineP__routingTable[sim_node()][idx].linkETX;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 240
    {
      newETX = BcpRoutingEngineP__routingTable[sim_node()][idx].linkETX;
      newETX = (newETX * LINK_LOSS_ALPHA + txCount_p * 100 * (100 - LINK_LOSS_ALPHA)) / 100;
      BcpRoutingEngineP__routingTable[sim_node()][idx].linkETX = (uint16_t )newETX;
    }
#line 244
    __nesc_atomic_end(__nesc_atomic); }
}

# 155 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

# 63 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static error_t TossimActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageP__getHeader(amsg);

#line 69
  sim_log_debug(145U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.data, id);
  __nesc_hton_uint16(header->dest.data, addr);
  __nesc_hton_uint16(header->src.data, TossimActiveMessageP__AMPacket__address());
  __nesc_hton_uint8(header->length.data, len);
  TossimActiveMessageP__SendNotifier__aboutToSend(id, addr, amsg);
  err = TossimActiveMessageP__SubSend__send(amsg, len + sizeof(tossim_header_t ));
  return err;
}

# 279 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg)
#line 279
{
  double noise = CpmModelC__noise_hash_generation();
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];
  int count = 0;

#line 283
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      sim_log_debug(159U, "CpmModelC", "packetReceive: outstanding from %d\n", list->source);
      count++;

      if (list->channel != sim_mote_get_radio_channel(sim_node())) {
          list = list->next;
          continue;
        }
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  sim_log_debug(160U, "CpmModelC", "packetReceive: outstanding count %d noise %lf at %lf\n", count, noise, (double )sim_time() / sim_ticks_per_sec());
  return noise;
}

#line 121
static double CpmModelC__noise_hash_generation(void )
#line 121
{
  double CT = CpmModelC__timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(151U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, sim_mote_get_radio_channel(node_id), quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, sim_mote_get_radio_channel(node_id), quotient);
    }
  sim_log_debug(152U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 91 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  uint8_t sim_mote_get_radio_channel(int mote)
#line 91
{
  uint8_t result;
  int tmp = sim_node();

#line 94
  sim_set_node(mote);
  result = SimMoteP__SimMote__getRadioChannel();
  sim_set_node(tmp);
  return result;
}

# 49 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/csma/sim/CC2420CsmaP.nc"
static void CC2420CsmaP__Model__sendDone(message_t *msg, error_t result)
{
  sim_log_debug(129U, "Csma", "Csma: Signaling sendDone for packet %p, destination %d, dsn %d, error %d\n", msg, CC2420CsmaP__AMPacket__destination(msg), __nesc_ntoh_uint8(CC2420CsmaP__CC2420PacketBody__getHeader(msg)->dsn.data), result);

  CC2420CsmaP__Send__sendDone(msg, result);
}

# 242 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC__shouldReceive(double SNR)
#line 242
{
  double prr = CpmModelC__prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 245
  if (prr != 0 && prr != 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 249
        prr = 0.0;
        }
    }
#line 251
  return prr;
}

# 19 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_lqi.c"
  uint8_t sim_lqi_generate(double SNR)
{
  uint8_t coin = RandomUniform() * 100;
  uint8_t i;
#line 22
  uint8_t closest_i = 0;


  for (i = 0; i < allSnr_len; i++) {
      if (allSnr[i].snr == SNR) {
          break;
        }
      else 
#line 28
        {
          if (fabs(SNR - allSnr[i].snr) < fabs(SNR - allSnr[closest_i].snr)) {
              closest_i = i;
            }
        }
    }
  i = i == allSnr_len ? closest_i : i;


  return bi_search(allSnr[i].lqi, 0, allSnr[i].numLqi - 1, coin);
}

#line 5
static uint8_t bi_search(lqi_dist_t *lqi, uint8_t low_i, uint8_t high_i, uint8_t coin)
{
  uint8_t i = low_i + (high_i - low_i + 1) / 2;
  uint8_t fromCDF = i == 0 ? 0 : lqi[i - 1].cdf;
  uint8_t toCDF = lqi[i].cdf;

#line 10
  if (fromCDF <= coin && coin < toCDF) {
      return lqi[i].lqi;
    }
  else {
#line 12
    if (fromCDF > coin) {
        return bi_search(lqi, low_i, i - 1, coin);
      }
    else 
#line 14
      {
        return bi_search(lqi, i + 1, high_i, coin);
      }
    }
}

# 298 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg)
#line 298
{
  if (TossimPacketModelC__running[sim_node()] && !TossimPacketModelC__transmitting[sim_node()]) {
      return TossimPacketModelC__Packet__shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 212 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC__sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC__receive_message_t *r)
#line 212
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC__sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 62 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 364 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRoutingEngineP.nc"
static error_t BcpRoutingEngineP__RootControl__setRoot(void )
#line 364
{
  BcpRoutingEngineP__state_is_root[sim_node()] = 1;
  sim_log_debug(257U, "Routing", "%s I'm a root now!\n", __FUNCTION__);
  return SUCCESS;
}

static error_t BcpRoutingEngineP__RootControl__unsetRoot(void )
#line 370
{
  BcpRoutingEngineP__state_is_root[sim_node()] = 0;
  sim_log_debug(258U, "Routing", "%s I'm not a root now!\n", __FUNCTION__);
  return SUCCESS;
}

# 58 "/home/xinchaol/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed[sim_node()];
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed[sim_node()] = mlcg;
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 69 "/home/xinchaol/local/src/tinyos-2.x/tos/system/QueueC.nc"
static void /*BcpRateControllerC.modQueue*/QueueC__1__printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(331U, "QueueC", "head <-");
  for (i = /*BcpRateControllerC.modQueue*/QueueC__1__head[sim_node()]; i < /*BcpRateControllerC.modQueue*/QueueC__1__head[sim_node()] + /*BcpRateControllerC.modQueue*/QueueC__1__size[sim_node()]; i++) {
      sim_log_debug_clear(332U, "QueueC", "[");
      for (j = 0; j < sizeof(/*BcpRateControllerC.modQueue*/QueueC__1__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*BcpRateControllerC.modQueue*/QueueC__1__queue[sim_node()][i % 6])[j];

#line 77
          sim_log_debug_clear(333U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(334U, "QueueC", "] ");
    }
  sim_log_debug_clear(335U, "QueueC", "<- tail\n");
}

# 103 "/home/xinchaol/local/src/tinyos-2.x/tos/system/PoolP.nc"
static error_t /*BcpRateControllerC.modPool.PoolP*/PoolP__3__Pool__put(/*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool_t *newVal)
#line 103
{
  if (/*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[sim_node()] >= 6) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[sim_node()] + /*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[sim_node()];

#line 109
      if (emptyIndex >= 6) {
          emptyIndex -= 6;
        }
      /*BcpRateControllerC.modPool.PoolP*/PoolP__3__queue[sim_node()][emptyIndex] = newVal;
      /*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[sim_node()]++;
      sim_log_debug(330U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[sim_node()]);
      return SUCCESS;
    }
}

# 62 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/BcpRateControllerP.nc"
static void BcpRateControllerP__startAdmissionTimer(void )
#line 62
{
  uint32_t newMean = 0;





  sim_log_debug(317U, "RateControl", "%s: Backpressure: %hhu.\n", __FUNCTION__, BcpRateControllerP__getBackpressure__get());
  newMean = 150 * BcpRateControllerP__fourthRoot(50 * BcpRateControllerP__getBackpressure__get());



  if (newMean < 100) {

      newMean = 100;
    }

  sim_log_debug(318U, "RateControl", "%s: Mean of Sending Rate is %hu, and Valpha is %hu.\n", __FUNCTION__, newMean, BcpRateControllerP__Valpha[sim_node()]);


  BcpRateControllerP__setMean__set(newMean);

  BcpRateControllerP__admissionTimer__startOneShot(BcpRateControllerP__exponentialRandom__rand32());
}

# 212 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      sim_log_debug(282U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              sim_log_debug(283U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(284U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          sim_log_debug(285U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          sim_log_debug(286U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 455 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 455
{
  sim_log_debug(303U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 457
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP__schedule_new_compare();
      }
  }
}

#line 259
static void HplAtm128Timer0AsyncP__schedule_new_compare(void )
#line 259
{
  if (HplAtm128Timer0AsyncP__compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__cancel_compare();
    }
  if (HplAtm128Timer0AsyncP__Timer0__getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP__allocate_compare();

#line 265
      HplAtm128Timer0AsyncP__configure_compare(newEvent);

      HplAtm128Timer0AsyncP__compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 89 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 89
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 91
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 92 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void )
#line 92
{
  HplAtm128Timer0AsyncP__inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP__Timer0__overflow();
  HplAtm128Timer0AsyncP__inOverflow[sim_node()] = FALSE;
}

#line 500
static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *evt)
#line 500
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP__Timer0__get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP__shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP__clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP__last_zero()) % (1 << HplAtm128Timer0AsyncP__shiftFromScale());

  sim_log_debug(306U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 86
  void INTERRUPT_15(void )
#line 86
{

  HplAtm128Timer0AsyncP__Compare__fired();
}

#line 223
static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *evt)
#line 223
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP__Timer0__get();
  uint8_t compareVal = HplAtm128Timer0AsyncP__Compare__get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP__shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP__clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP__last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP__clock_to_sim(1 << HplAtm128Timer0AsyncP__shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(295U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 72 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/net/bcp/StackC.nc"
static /*BcpC.SendStack*/StackC__0__stack_t /*BcpC.SendStack*/StackC__0__Stack__popTop(void )
#line 72
{
  /*BcpC.SendStack*/StackC__0__stack_t t = /*BcpC.SendStack*/StackC__0__Stack__top();

#line 74
  sim_log_debug(271U, "StackC", "%s: size is %hhu\n", __FUNCTION__, /*BcpC.SendStack*/StackC__0__size[sim_node()]);

  if (/*BcpC.SendStack*/StackC__0__Stack__empty()) {
    return t;
    }
  if (/*BcpC.SendStack*/StackC__0__size[sim_node()] > 1) {
      if (/*BcpC.SendStack*/StackC__0__top[sim_node()] == 0) {
        /*BcpC.SendStack*/StackC__0__top[sim_node()] = 11 - 1;
        }
      else {
#line 83
        /*BcpC.SendStack*/StackC__0__top[sim_node()]--;
        }
    }
  /*BcpC.SendStack*/StackC__0__size[sim_node()]--;
  return t;
}

# 91 "/home/xinchaol/local/src/tinyos-2.x/tos/chips/cc2420/sim/TossimActiveMessageP.nc"
static void TossimActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
{
  tossim_header_t *header = TossimActiveMessageP__getHeader(amsg);

#line 94
  __nesc_hton_uint16(header->dest.data, addr);
}

#line 122
static void TossimActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t t)
{
  tossim_header_t *header = TossimActiveMessageP__getHeader(amsg);

#line 125
  __nesc_hton_uint8(header->type.data, t);
}

# 82 "/home/xinchaol/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 2) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(309U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] >= 2) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      sim_log_debug(310U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(311U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = 2;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(312U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 98 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC__Control__start(void )
#line 98
{
  if (!TossimPacketModelC__initialized[sim_node()]) {
      sim_log_error(180U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(181U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC__startDoneTask__postTask();
  return SUCCESS;
}

# 98 "/home/xinchaol/local/src/tinyos-2.x/tos/system/LedsP.nc"
static void LedsP__Leds__led2Off(void )
#line 98
{
  LedsP__Led2__set();
  sim_log_debug(143U, "LedsC", "LEDS: Led""2"" %s.\n", LedsP__Led2__get() ? "off" : "on");
#line 100
  ;
}

#line 83
static void LedsP__Leds__led1Off(void )
#line 83
{
  LedsP__Led1__set();
  sim_log_debug(140U, "LedsC", "LEDS: Led""1"" %s.\n", LedsP__Led1__get() ? "off" : "on");
#line 85
  ;
}

# 79 "/home/xinchaol/local/src/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel)
#line 79
{
  error_t result;
  int tmp = sim_node();

#line 82
  sim_set_node(mote);
  result = SimMoteP__SimMote__setRadioChannel(newRadioChannel);
  sim_set_node(tmp);
  return result;
}

#line 135
  long long int sim_mote_euid(int mote)
#line 135
{
  long long int result;
  int tmp = sim_node();

#line 138
  sim_set_node(mote);
  result = SimMoteP__SimMote__getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 144
{
  int tmp = sim_node();

#line 146
  sim_set_node(mote);
  SimMoteP__SimMote__setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 160
{
  int result;
  int tmpID = sim_node();

#line 163
  sim_set_node(mote);
  result = SimMoteP__SimMote__getVariableInfo(name, ptr, len);
  sim_log_debug(125U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 170
{
  int tmpID = sim_node();

#line 172
  sim_set_node(mote);
  SimMoteP__startTime[sim_node()] = t;
  sim_log_debug(126U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 188
{
  int tmp = sim_node();

#line 190
  sim_set_node(mote);
  SimMoteP__SimMote__turnOn();
  sim_set_node(tmp);
}

#line 117
static void SimMoteP__SimMote__turnOn(void )
#line 117
{
  if (!SimMoteP__isOn[sim_node()]) {
      if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP__startTime[sim_node()] = sim_time();
      sim_log_debug(124U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
      SimMoteP__isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 195
  void sim_mote_turn_off(int mote)
#line 195
{
  int tmp = sim_node();

#line 197
  sim_set_node(mote);
  SimMoteP__SimMote__turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 211
{
  int tmp = sim_node();

#line 213
  sim_set_node(mote);

  if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP__bootEvent[sim_node()]->time == SimMoteP__startTime[sim_node()]) {

          SimMoteP__bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP__bootEvent[sim_node()]->time = SimMoteP__startTime[sim_node()];
  SimMoteP__bootEvent[sim_node()]->mote = mote;
  SimMoteP__bootEvent[sim_node()]->force = TRUE;
  SimMoteP__bootEvent[sim_node()]->data = (void *)0;
  SimMoteP__bootEvent[sim_node()]->handle = SimMoteP__sim_mote_boot_handle;
  SimMoteP__bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP__bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module BcpCollectionExampleC */
  if (!strcmp(varname, "BcpCollectionExampleC__packet"))
  {
    *addr = (uintptr_t)&BcpCollectionExampleC__packet[__nesc_mote];
    *size = sizeof(BcpCollectionExampleC__packet[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpCollectionExampleC__count"))
  {
    *addr = (uintptr_t)&BcpCollectionExampleC__count[__nesc_mote];
    *size = sizeof(BcpCollectionExampleC__count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpCollectionExampleC__testTime"))
  {
    *addr = (uintptr_t)&BcpCollectionExampleC__testTime[__nesc_mote];
    *size = sizeof(BcpCollectionExampleC__testTime[__nesc_mote]);
    return 0;
  }

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP__0 */

  /* Module HplAtm128GeneralIOPinP__1 */

  /* Module HplAtm128GeneralIOPinP__2 */

  /* Module HplAtm128GeneralIOPinP__3 */

  /* Module HplAtm128GeneralIOPinP__4 */

  /* Module HplAtm128GeneralIOPinP__5 */

  /* Module HplAtm128GeneralIOPinP__6 */

  /* Module HplAtm128GeneralIOPinP__7 */

  /* Module HplAtm128GeneralIOPinP__8 */

  /* Module HplAtm128GeneralIOPinP__9 */

  /* Module HplAtm128GeneralIOPinP__10 */

  /* Module HplAtm128GeneralIOPinP__11 */

  /* Module HplAtm128GeneralIOPinP__12 */

  /* Module HplAtm128GeneralIOPinP__13 */

  /* Module HplAtm128GeneralIOPinP__14 */

  /* Module HplAtm128GeneralIOPinP__15 */

  /* Module HplAtm128GeneralIOPinP__16 */

  /* Module HplAtm128GeneralIOPinP__17 */

  /* Module HplAtm128GeneralIOPinP__18 */

  /* Module HplAtm128GeneralIOPinP__19 */

  /* Module HplAtm128GeneralIOPinP__20 */

  /* Module HplAtm128GeneralIOPinP__21 */

  /* Module HplAtm128GeneralIOPinP__22 */

  /* Module HplAtm128GeneralIOPinP__23 */

  /* Module HplAtm128GeneralIOPinP__24 */

  /* Module HplAtm128GeneralIOPinP__25 */

  /* Module HplAtm128GeneralIOPinP__26 */

  /* Module HplAtm128GeneralIOPinP__27 */

  /* Module HplAtm128GeneralIOPinP__28 */

  /* Module HplAtm128GeneralIOPinP__29 */

  /* Module HplAtm128GeneralIOPinP__30 */

  /* Module HplAtm128GeneralIOPinP__31 */

  /* Module HplAtm128GeneralIOPinP__32 */

  /* Module HplAtm128GeneralIOPinP__33 */

  /* Module HplAtm128GeneralIOPinP__34 */

  /* Module HplAtm128GeneralIOPinP__35 */

  /* Module HplAtm128GeneralIOPinP__36 */

  /* Module HplAtm128GeneralIOPinP__37 */

  /* Module HplAtm128GeneralIOPinP__38 */

  /* Module HplAtm128GeneralIOPinP__39 */

  /* Module HplAtm128GeneralIOPinP__40 */

  /* Module HplAtm128GeneralIOPinP__41 */

  /* Module HplAtm128GeneralIOPinP__42 */

  /* Module HplAtm128GeneralIOPinP__43 */

  /* Module HplAtm128GeneralIOPinP__44 */

  /* Module HplAtm128GeneralIOPinP__45 */

  /* Module HplAtm128GeneralIOPinP__46 */

  /* Module HplAtm128GeneralIOPinP__47 */

  /* Module HplAtm128GeneralIOSlowPinP__0 */

  /* Module HplAtm128GeneralIOSlowPinP__1 */

  /* Module HplAtm128GeneralIOSlowPinP__2 */

  /* Module HplAtm128GeneralIOSlowPinP__3 */

  /* Module HplAtm128GeneralIOSlowPinP__4 */

  /* Module HplAtm128GeneralIOSlowPinP__5 */

  /* Module HplAtm128GeneralIOSlowPinP__6 */

  /* Module HplAtm128GeneralIOSlowPinP__7 */

  /* Module HplAtm128GeneralIOSlowPinP__8 */

  /* Module HplAtm128GeneralIOSlowPinP__9 */

  /* Module HplAtm128GeneralIOSlowPinP__10 */

  /* Module HplAtm128GeneralIOSlowPinP__11 */

  /* Module HplAtm128GeneralIOSlowPinP__12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP__m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP__euid"))
  {
    *addr = (uintptr_t)&SimMoteP__euid[__nesc_mote];
    *size = sizeof(SimMoteP__euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__startTime"))
  {
    *addr = (uintptr_t)&SimMoteP__startTime[__nesc_mote];
    *size = sizeof(SimMoteP__startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__isOn"))
  {
    *addr = (uintptr_t)&SimMoteP__isOn[__nesc_mote];
    *size = sizeof(SimMoteP__isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP__bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP__bootEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__radioChannel"))
  {
    *addr = (uintptr_t)&SimMoteP__radioChannel[__nesc_mote];
    *size = sizeof(SimMoteP__radioChannel[__nesc_mote]);
    return 0;
  }

  /* Module CC2420CsmaP */
  if (!strcmp(varname, "CC2420CsmaP__buffer"))
  {
    *addr = (uintptr_t)&CC2420CsmaP__buffer[__nesc_mote];
    *size = sizeof(CC2420CsmaP__buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CC2420CsmaP__bufferPointer"))
  {
    *addr = (uintptr_t)&CC2420CsmaP__bufferPointer[__nesc_mote];
    *size = sizeof(CC2420CsmaP__bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module LedsP */

  /* Module TossimActiveMessageP */
  if (!strcmp(varname, "TossimActiveMessageP__buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageP__buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageP__buffer[__nesc_mote]);
    return 0;
  }

  /* Module CC2420ControlP */
  if (!strcmp(varname, "CC2420ControlP__channel"))
  {
    *addr = (uintptr_t)&CC2420ControlP__channel[__nesc_mote];
    *size = sizeof(CC2420ControlP__channel[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CC2420ControlP__autoAck"))
  {
    *addr = (uintptr_t)&CC2420ControlP__autoAck[__nesc_mote];
    *size = sizeof(CC2420ControlP__autoAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CC2420ControlP__hwAutoAck"))
  {
    *addr = (uintptr_t)&CC2420ControlP__hwAutoAck[__nesc_mote];
    *size = sizeof(CC2420ControlP__hwAutoAck[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC__outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC__outgoing[__nesc_mote];
    *size = sizeof(CpmModelC__outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC__requestAck[__nesc_mote];
    *size = sizeof(CpmModelC__requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__receiving"))
  {
    *addr = (uintptr_t)&CpmModelC__receiving[__nesc_mote];
    *size = sizeof(CpmModelC__receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__rssi"))
  {
    *addr = (uintptr_t)&CpmModelC__rssi[__nesc_mote];
    *size = sizeof(CpmModelC__rssi[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC__outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC__outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC__clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC__clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC__initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC__initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__running[__nesc_mote];
    *size = sizeof(TossimPacketModelC__running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC__backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC__neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC__transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC__destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__error[__nesc_mote];
    *size = sizeof(TossimPacketModelC__error[__nesc_mote]);
    return 0;
  }

  /* Module CC2420PacketP */

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC__set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC__addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__addr[__nesc_mote]);
    return 0;
  }

  /* Module UniqueSendP */
  if (!strcmp(varname, "UniqueSendP__localSendId"))
  {
    *addr = (uintptr_t)&UniqueSendP__localSendId[__nesc_mote];
    *size = sizeof(UniqueSendP__localSendId[__nesc_mote]);
    return 0;
  }

  /* Module StateImplP */
  if (!strcmp(varname, "StateImplP__state"))
  {
    *addr = (uintptr_t)&StateImplP__state[__nesc_mote];
    *size = sizeof(StateImplP__state[__nesc_mote]);
    return 0;
  }

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC__seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC__seed[__nesc_mote];
    *size = sizeof(RandomMlcgC__seed[__nesc_mote]);
    return 0;
  }

  /* Module UniqueReceiveP */
  if (!strcmp(varname, "UniqueReceiveP__receivedMessages"))
  {
    *addr = (uintptr_t)&UniqueReceiveP__receivedMessages[__nesc_mote];
    *size = sizeof(UniqueReceiveP__receivedMessages[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UniqueReceiveP__writeIndex"))
  {
    *addr = (uintptr_t)&UniqueReceiveP__writeIndex[__nesc_mote];
    *size = sizeof(UniqueReceiveP__writeIndex[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UniqueReceiveP__recycleSourceElement"))
  {
    *addr = (uintptr_t)&UniqueReceiveP__recycleSourceElement[__nesc_mote];
    *size = sizeof(UniqueReceiveP__recycleSourceElement[__nesc_mote]);
    return 0;
  }

  /* Module DummyLplP */

  /* Module PacketLinkDummyP */

  /* Module BcpForwardingEngineP */
  if (!strcmp(varname, "BcpForwardingEngineP__latestForwardedTableActive"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__latestForwardedTableActive[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__latestForwardedTableActive[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__latestForwardedTable"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__latestForwardedTable[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__latestForwardedTable[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__seqno"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__seqno[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__seqno[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__nullSeqNo"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__nullSeqNo[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__nullSeqNo[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__beaconMsgBuffer"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__beaconMsgBuffer[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__beaconMsgBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__beaconHdr"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__beaconHdr[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__beaconHdr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__beaconSending"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__beaconSending[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__beaconSending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__running"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__running[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__sending"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__sending[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__radioOn"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__radioOn[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__radioOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__localTXCount"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__localTXCount[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__localTXCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__nextHopAddress_m"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__nextHopAddress_m[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__nextHopAddress_m[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__nextHopBackpressure_m"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__nextHopBackpressure_m[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__nextHopBackpressure_m[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__notifyBurstyLinkNeighbor_m"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__notifyBurstyLinkNeighbor_m[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__notifyBurstyLinkNeighbor_m[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__loopbackMsg"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__loopbackMsg[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__loopbackMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__loopbackMsgPtr"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__loopbackMsgPtr[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__loopbackMsgPtr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__sendQe"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__sendQe[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__sendQe[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__sendQeOccupied"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__sendQeOccupied[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__sendQeOccupied[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__virtualQueueSize"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__virtualQueueSize[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__virtualQueueSize[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__dataCRCSuccessCount"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__dataCRCSuccessCount[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__dataCRCSuccessCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__dataCRCFailCount"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__dataCRCFailCount[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__dataCRCFailCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__snoopCRCSuccessCount"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__snoopCRCSuccessCount[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__snoopCRCSuccessCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__snoopCRCFailCount"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__snoopCRCFailCount[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__snoopCRCFailCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__Valpha"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__Valpha[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__Valpha[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__VaSeq"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__VaSeq[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__VaSeq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__congestNodeCount"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__congestNodeCount[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__congestNodeCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpForwardingEngineP__congestNodeId"))
  {
    *addr = (uintptr_t)&BcpForwardingEngineP__congestNodeId[__nesc_mote];
    *size = sizeof(BcpForwardingEngineP__congestNodeId[__nesc_mote]);
    return 0;
  }

  /* Module BcpRoutingEngineP */
  if (!strcmp(varname, "BcpRoutingEngineP__routingTableActive"))
  {
    *addr = (uintptr_t)&BcpRoutingEngineP__routingTableActive[__nesc_mote];
    *size = sizeof(BcpRoutingEngineP__routingTableActive[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpRoutingEngineP__routingTable"))
  {
    *addr = (uintptr_t)&BcpRoutingEngineP__routingTable[__nesc_mote];
    *size = sizeof(BcpRoutingEngineP__routingTable[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpRoutingEngineP__state_is_root"))
  {
    *addr = (uintptr_t)&BcpRoutingEngineP__state_is_root[__nesc_mote];
    *size = sizeof(BcpRoutingEngineP__state_is_root[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpRoutingEngineP__running"))
  {
    *addr = (uintptr_t)&BcpRoutingEngineP__running[__nesc_mote];
    *size = sizeof(BcpRoutingEngineP__running[__nesc_mote]);
    return 0;
  }

  /* Module PoolP__0 */
  if (!strcmp(varname, "/*BcpC.MessagePoolP.PoolP*/PoolP__0__free"))
  {
    *addr = (uintptr_t)&/*BcpC.MessagePoolP.PoolP*/PoolP__0__free[__nesc_mote];
    *size = sizeof(/*BcpC.MessagePoolP.PoolP*/PoolP__0__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.MessagePoolP.PoolP*/PoolP__0__index"))
  {
    *addr = (uintptr_t)&/*BcpC.MessagePoolP.PoolP*/PoolP__0__index[__nesc_mote];
    *size = sizeof(/*BcpC.MessagePoolP.PoolP*/PoolP__0__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.MessagePoolP.PoolP*/PoolP__0__queue"))
  {
    *addr = (uintptr_t)&/*BcpC.MessagePoolP.PoolP*/PoolP__0__queue[__nesc_mote];
    *size = sizeof(/*BcpC.MessagePoolP.PoolP*/PoolP__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.MessagePoolP.PoolP*/PoolP__0__pool"))
  {
    *addr = (uintptr_t)&/*BcpC.MessagePoolP.PoolP*/PoolP__0__pool[__nesc_mote];
    *size = sizeof(/*BcpC.MessagePoolP.PoolP*/PoolP__0__pool[__nesc_mote]);
    return 0;
  }

  /* Module PoolP__1 */
  if (!strcmp(varname, "/*BcpC.QEntryPoolP.PoolP*/PoolP__1__free"))
  {
    *addr = (uintptr_t)&/*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[__nesc_mote];
    *size = sizeof(/*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.QEntryPoolP.PoolP*/PoolP__1__index"))
  {
    *addr = (uintptr_t)&/*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[__nesc_mote];
    *size = sizeof(/*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.QEntryPoolP.PoolP*/PoolP__1__queue"))
  {
    *addr = (uintptr_t)&/*BcpC.QEntryPoolP.PoolP*/PoolP__1__queue[__nesc_mote];
    *size = sizeof(/*BcpC.QEntryPoolP.PoolP*/PoolP__1__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool"))
  {
    *addr = (uintptr_t)&/*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool[__nesc_mote];
    *size = sizeof(/*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool[__nesc_mote]);
    return 0;
  }

  /* Module PoolP__2 */
  if (!strcmp(varname, "/*BcpC.SnoopPoolP.PoolP*/PoolP__2__free"))
  {
    *addr = (uintptr_t)&/*BcpC.SnoopPoolP.PoolP*/PoolP__2__free[__nesc_mote];
    *size = sizeof(/*BcpC.SnoopPoolP.PoolP*/PoolP__2__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.SnoopPoolP.PoolP*/PoolP__2__index"))
  {
    *addr = (uintptr_t)&/*BcpC.SnoopPoolP.PoolP*/PoolP__2__index[__nesc_mote];
    *size = sizeof(/*BcpC.SnoopPoolP.PoolP*/PoolP__2__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.SnoopPoolP.PoolP*/PoolP__2__queue"))
  {
    *addr = (uintptr_t)&/*BcpC.SnoopPoolP.PoolP*/PoolP__2__queue[__nesc_mote];
    *size = sizeof(/*BcpC.SnoopPoolP.PoolP*/PoolP__2__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool"))
  {
    *addr = (uintptr_t)&/*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool[__nesc_mote];
    *size = sizeof(/*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool[__nesc_mote]);
    return 0;
  }

  /* Module StackC__0 */
  if (!strcmp(varname, "/*BcpC.SendStack*/StackC__0__stack"))
  {
    *addr = (uintptr_t)&/*BcpC.SendStack*/StackC__0__stack[__nesc_mote];
    *size = sizeof(/*BcpC.SendStack*/StackC__0__stack[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.SendStack*/StackC__0__top"))
  {
    *addr = (uintptr_t)&/*BcpC.SendStack*/StackC__0__top[__nesc_mote];
    *size = sizeof(/*BcpC.SendStack*/StackC__0__top[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.SendStack*/StackC__0__bottom"))
  {
    *addr = (uintptr_t)&/*BcpC.SendStack*/StackC__0__bottom[__nesc_mote];
    *size = sizeof(/*BcpC.SendStack*/StackC__0__bottom[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.SendStack*/StackC__0__size"))
  {
    *addr = (uintptr_t)&/*BcpC.SendStack*/StackC__0__size[__nesc_mote];
    *size = sizeof(/*BcpC.SendStack*/StackC__0__size[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__0 */
  if (!strcmp(varname, "/*BcpC.SnoopQueue*/QueueC__0__queue"))
  {
    *addr = (uintptr_t)&/*BcpC.SnoopQueue*/QueueC__0__queue[__nesc_mote];
    *size = sizeof(/*BcpC.SnoopQueue*/QueueC__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.SnoopQueue*/QueueC__0__head"))
  {
    *addr = (uintptr_t)&/*BcpC.SnoopQueue*/QueueC__0__head[__nesc_mote];
    *size = sizeof(/*BcpC.SnoopQueue*/QueueC__0__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.SnoopQueue*/QueueC__0__tail"))
  {
    *addr = (uintptr_t)&/*BcpC.SnoopQueue*/QueueC__0__tail[__nesc_mote];
    *size = sizeof(/*BcpC.SnoopQueue*/QueueC__0__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpC.SnoopQueue*/QueueC__0__size"))
  {
    *addr = (uintptr_t)&/*BcpC.SnoopQueue*/QueueC__0__size[__nesc_mote];
    *size = sizeof(/*BcpC.SnoopQueue*/QueueC__0__size[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP__0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC__0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC__0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC__0 */

  /* Module AMQueueEntryP__0 */

  /* Module AMQueueImplP__0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP__1 */

  /* Module DummyActiveMessageP */

  /* Module BcpRateControllerP */
  if (!strcmp(varname, "BcpRateControllerP__Vmax"))
  {
    *addr = (uintptr_t)&BcpRateControllerP__Vmax[__nesc_mote];
    *size = sizeof(BcpRateControllerP__Vmax[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpRateControllerP__Valpha"))
  {
    *addr = (uintptr_t)&BcpRateControllerP__Valpha[__nesc_mote];
    *size = sizeof(BcpRateControllerP__Valpha[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpRateControllerP__seqNo"))
  {
    *addr = (uintptr_t)&BcpRateControllerP__seqNo[__nesc_mote];
    *size = sizeof(BcpRateControllerP__seqNo[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpRateControllerP__Tretx"))
  {
    *addr = (uintptr_t)&BcpRateControllerP__Tretx[__nesc_mote];
    *size = sizeof(BcpRateControllerP__Tretx[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BcpRateControllerP__Tthreshold"))
  {
    *addr = (uintptr_t)&BcpRateControllerP__Tthreshold[__nesc_mote];
    *size = sizeof(BcpRateControllerP__Tthreshold[__nesc_mote]);
    return 0;
  }

  /* Module exponentialRandomM__0 */
  if (!strcmp(varname, "/*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__mean_m"))
  {
    *addr = (uintptr_t)&/*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__mean_m[__nesc_mote];
    *size = sizeof(/*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__mean_m[__nesc_mote]);
    return 0;
  }

  /* Module PoolP__3 */
  if (!strcmp(varname, "/*BcpRateControllerC.modPool.PoolP*/PoolP__3__free"))
  {
    *addr = (uintptr_t)&/*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[__nesc_mote];
    *size = sizeof(/*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpRateControllerC.modPool.PoolP*/PoolP__3__index"))
  {
    *addr = (uintptr_t)&/*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[__nesc_mote];
    *size = sizeof(/*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpRateControllerC.modPool.PoolP*/PoolP__3__queue"))
  {
    *addr = (uintptr_t)&/*BcpRateControllerC.modPool.PoolP*/PoolP__3__queue[__nesc_mote];
    *size = sizeof(/*BcpRateControllerC.modPool.PoolP*/PoolP__3__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool"))
  {
    *addr = (uintptr_t)&/*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool[__nesc_mote];
    *size = sizeof(/*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__1 */
  if (!strcmp(varname, "/*BcpRateControllerC.modQueue*/QueueC__1__queue"))
  {
    *addr = (uintptr_t)&/*BcpRateControllerC.modQueue*/QueueC__1__queue[__nesc_mote];
    *size = sizeof(/*BcpRateControllerC.modQueue*/QueueC__1__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpRateControllerC.modQueue*/QueueC__1__head"))
  {
    *addr = (uintptr_t)&/*BcpRateControllerC.modQueue*/QueueC__1__head[__nesc_mote];
    *size = sizeof(/*BcpRateControllerC.modQueue*/QueueC__1__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpRateControllerC.modQueue*/QueueC__1__tail"))
  {
    *addr = (uintptr_t)&/*BcpRateControllerC.modQueue*/QueueC__1__tail[__nesc_mote];
    *size = sizeof(/*BcpRateControllerC.modQueue*/QueueC__1__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpRateControllerC.modQueue*/QueueC__1__size"))
  {
    *addr = (uintptr_t)&/*BcpRateControllerC.modQueue*/QueueC__1__size[__nesc_mote];
    *size = sizeof(/*BcpRateControllerC.modQueue*/QueueC__1__size[__nesc_mote]);
    return 0;
  }

  /* Module exponentialRandomM__1 */
  if (!strcmp(varname, "/*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__mean_m"))
  {
    *addr = (uintptr_t)&/*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__mean_m[__nesc_mote];
    *size = sizeof(/*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__mean_m[__nesc_mote]);
    return 0;
  }

  /* Module SafeSerialSendM */
  if (!strcmp(varname, "SafeSerialSendM__sending_m"))
  {
    *addr = (uintptr_t)&SafeSerialSendM__sending_m[__nesc_mote];
    *size = sizeof(SafeSerialSendM__sending_m[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SafeSerialSendM__serialRunning_m"))
  {
    *addr = (uintptr_t)&SafeSerialSendM__serialRunning_m[__nesc_mote];
    *size = sizeof(SafeSerialSendM__serialRunning_m[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SafeSerialSendM__overflowCount_m"))
  {
    *addr = (uintptr_t)&SafeSerialSendM__overflowCount_m[__nesc_mote];
    *size = sizeof(SafeSerialSendM__overflowCount_m[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__2 */
  if (!strcmp(varname, "/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue"))
  {
    *addr = (uintptr_t)&/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue[__nesc_mote];
    *size = sizeof(/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__head"))
  {
    *addr = (uintptr_t)&/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__head[__nesc_mote];
    *size = sizeof(/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__tail"))
  {
    *addr = (uintptr_t)&/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__tail[__nesc_mote];
    *size = sizeof(/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__size"))
  {
    *addr = (uintptr_t)&/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__size[__nesc_mote];
    *size = sizeof(/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__size[__nesc_mote]);
    return 0;
  }

  /* Module PoolP__4 */
  if (!strcmp(varname, "/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free"))
  {
    *addr = (uintptr_t)&/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[__nesc_mote];
    *size = sizeof(/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index"))
  {
    *addr = (uintptr_t)&/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[__nesc_mote];
    *size = sizeof(/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__queue"))
  {
    *addr = (uintptr_t)&/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__queue[__nesc_mote];
    *size = sizeof(/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool"))
  {
    *addr = (uintptr_t)&/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool[__nesc_mote];
    *size = sizeof(/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool[__nesc_mote]);
    return 0;
  }

  /* Module SerialActiveMessageC */

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module BcpCollectionExampleC */
  memset((void *)&BcpCollectionExampleC__packet[__nesc_mote], 0, sizeof BcpCollectionExampleC__packet[__nesc_mote]);
  BcpCollectionExampleC__count[__nesc_mote] = 0;
  BcpCollectionExampleC__testTime[__nesc_mote] = 0;

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP__0 */

  /* Module HplAtm128GeneralIOPinP__1 */

  /* Module HplAtm128GeneralIOPinP__2 */

  /* Module HplAtm128GeneralIOPinP__3 */

  /* Module HplAtm128GeneralIOPinP__4 */

  /* Module HplAtm128GeneralIOPinP__5 */

  /* Module HplAtm128GeneralIOPinP__6 */

  /* Module HplAtm128GeneralIOPinP__7 */

  /* Module HplAtm128GeneralIOPinP__8 */

  /* Module HplAtm128GeneralIOPinP__9 */

  /* Module HplAtm128GeneralIOPinP__10 */

  /* Module HplAtm128GeneralIOPinP__11 */

  /* Module HplAtm128GeneralIOPinP__12 */

  /* Module HplAtm128GeneralIOPinP__13 */

  /* Module HplAtm128GeneralIOPinP__14 */

  /* Module HplAtm128GeneralIOPinP__15 */

  /* Module HplAtm128GeneralIOPinP__16 */

  /* Module HplAtm128GeneralIOPinP__17 */

  /* Module HplAtm128GeneralIOPinP__18 */

  /* Module HplAtm128GeneralIOPinP__19 */

  /* Module HplAtm128GeneralIOPinP__20 */

  /* Module HplAtm128GeneralIOPinP__21 */

  /* Module HplAtm128GeneralIOPinP__22 */

  /* Module HplAtm128GeneralIOPinP__23 */

  /* Module HplAtm128GeneralIOPinP__24 */

  /* Module HplAtm128GeneralIOPinP__25 */

  /* Module HplAtm128GeneralIOPinP__26 */

  /* Module HplAtm128GeneralIOPinP__27 */

  /* Module HplAtm128GeneralIOPinP__28 */

  /* Module HplAtm128GeneralIOPinP__29 */

  /* Module HplAtm128GeneralIOPinP__30 */

  /* Module HplAtm128GeneralIOPinP__31 */

  /* Module HplAtm128GeneralIOPinP__32 */

  /* Module HplAtm128GeneralIOPinP__33 */

  /* Module HplAtm128GeneralIOPinP__34 */

  /* Module HplAtm128GeneralIOPinP__35 */

  /* Module HplAtm128GeneralIOPinP__36 */

  /* Module HplAtm128GeneralIOPinP__37 */

  /* Module HplAtm128GeneralIOPinP__38 */

  /* Module HplAtm128GeneralIOPinP__39 */

  /* Module HplAtm128GeneralIOPinP__40 */

  /* Module HplAtm128GeneralIOPinP__41 */

  /* Module HplAtm128GeneralIOPinP__42 */

  /* Module HplAtm128GeneralIOPinP__43 */

  /* Module HplAtm128GeneralIOPinP__44 */

  /* Module HplAtm128GeneralIOPinP__45 */

  /* Module HplAtm128GeneralIOPinP__46 */

  /* Module HplAtm128GeneralIOPinP__47 */

  /* Module HplAtm128GeneralIOSlowPinP__0 */

  /* Module HplAtm128GeneralIOSlowPinP__1 */

  /* Module HplAtm128GeneralIOSlowPinP__2 */

  /* Module HplAtm128GeneralIOSlowPinP__3 */

  /* Module HplAtm128GeneralIOSlowPinP__4 */

  /* Module HplAtm128GeneralIOSlowPinP__5 */

  /* Module HplAtm128GeneralIOSlowPinP__6 */

  /* Module HplAtm128GeneralIOSlowPinP__7 */

  /* Module HplAtm128GeneralIOSlowPinP__8 */

  /* Module HplAtm128GeneralIOSlowPinP__9 */

  /* Module HplAtm128GeneralIOSlowPinP__10 */

  /* Module HplAtm128GeneralIOSlowPinP__11 */

  /* Module HplAtm128GeneralIOSlowPinP__12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP__m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_next[__nesc_mote]);
  SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP__euid[__nesc_mote], 0, sizeof SimMoteP__euid[__nesc_mote]);
  memset((void *)&SimMoteP__startTime[__nesc_mote], 0, sizeof SimMoteP__startTime[__nesc_mote]);
  memset((void *)&SimMoteP__isOn[__nesc_mote], 0, sizeof SimMoteP__isOn[__nesc_mote]);
  memset((void *)&SimMoteP__bootEvent[__nesc_mote], 0, sizeof SimMoteP__bootEvent[__nesc_mote]);
  SimMoteP__radioChannel[__nesc_mote] = 26;

  /* Module CC2420CsmaP */
  memset((void *)&CC2420CsmaP__buffer[__nesc_mote], 0, sizeof CC2420CsmaP__buffer[__nesc_mote]);
  CC2420CsmaP__bufferPointer[__nesc_mote] = &CC2420CsmaP__buffer[__nesc_mote];

  /* Module LedsP */

  /* Module TossimActiveMessageP */
  memset((void *)&TossimActiveMessageP__buffer[__nesc_mote], 0, sizeof TossimActiveMessageP__buffer[__nesc_mote]);

  /* Module CC2420ControlP */
  memset((void *)&CC2420ControlP__channel[__nesc_mote], 0, sizeof CC2420ControlP__channel[__nesc_mote]);
  memset((void *)&CC2420ControlP__autoAck[__nesc_mote], 0, sizeof CC2420ControlP__autoAck[__nesc_mote]);
  memset((void *)&CC2420ControlP__hwAutoAck[__nesc_mote], 0, sizeof CC2420ControlP__hwAutoAck[__nesc_mote]);

  /* Module CpmModelC */
  memset((void *)&CpmModelC__outgoing[__nesc_mote], 0, sizeof CpmModelC__outgoing[__nesc_mote]);
  memset((void *)&CpmModelC__requestAck[__nesc_mote], 0, sizeof CpmModelC__requestAck[__nesc_mote]);
  CpmModelC__receiving[__nesc_mote] = 0;
  CpmModelC__rssi[__nesc_mote] = FALSE;
  CpmModelC__outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC__clearThreshold[__nesc_mote] = -72.0;

  /* Module TossimPacketModelC */
  TossimPacketModelC__initialized[__nesc_mote] = FALSE;
  TossimPacketModelC__running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC__backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC__backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC__neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC__neededFreeSamples[__nesc_mote]);
  TossimPacketModelC__sending[__nesc_mote] = (void *)0;
  TossimPacketModelC__transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC__sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC__destNode[__nesc_mote], 0, sizeof TossimPacketModelC__destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC__sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC__sendEvent[__nesc_mote]);
  TossimPacketModelC__error[__nesc_mote] = 0;

  /* Module CC2420PacketP */

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC__set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC__addr[__nesc_mote], 0, sizeof ActiveMessageAddressC__addr[__nesc_mote]);

  /* Module UniqueSendP */
  memset((void *)&UniqueSendP__localSendId[__nesc_mote], 0, sizeof UniqueSendP__localSendId[__nesc_mote]);

  /* Module StateImplP */
  memset((void *)&StateImplP__state[__nesc_mote], 0, sizeof StateImplP__state[__nesc_mote]);

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC__seed[__nesc_mote], 0, sizeof RandomMlcgC__seed[__nesc_mote]);

  /* Module UniqueReceiveP */
  memset((void *)&UniqueReceiveP__receivedMessages[__nesc_mote], 0, sizeof UniqueReceiveP__receivedMessages[__nesc_mote]);
  UniqueReceiveP__writeIndex[__nesc_mote] = 0;
  memset((void *)&UniqueReceiveP__recycleSourceElement[__nesc_mote], 0, sizeof UniqueReceiveP__recycleSourceElement[__nesc_mote]);

  /* Module DummyLplP */

  /* Module PacketLinkDummyP */

  /* Module BcpForwardingEngineP */
  memset((void *)&BcpForwardingEngineP__latestForwardedTableActive[__nesc_mote], 0, sizeof BcpForwardingEngineP__latestForwardedTableActive[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__latestForwardedTable[__nesc_mote], 0, sizeof BcpForwardingEngineP__latestForwardedTable[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__seqno[__nesc_mote], 0, sizeof BcpForwardingEngineP__seqno[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__nullSeqNo[__nesc_mote], 0, sizeof BcpForwardingEngineP__nullSeqNo[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__beaconMsgBuffer[__nesc_mote], 0, sizeof BcpForwardingEngineP__beaconMsgBuffer[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__beaconHdr[__nesc_mote], 0, sizeof BcpForwardingEngineP__beaconHdr[__nesc_mote]);
  BcpForwardingEngineP__beaconSending[__nesc_mote] = FALSE;
  BcpForwardingEngineP__running[__nesc_mote] = FALSE;
  BcpForwardingEngineP__sending[__nesc_mote] = FALSE;
  BcpForwardingEngineP__radioOn[__nesc_mote] = FALSE;
  BcpForwardingEngineP__localTXCount[__nesc_mote] = 0;
  memset((void *)&BcpForwardingEngineP__nextHopAddress_m[__nesc_mote], 0, sizeof BcpForwardingEngineP__nextHopAddress_m[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__nextHopBackpressure_m[__nesc_mote], 0, sizeof BcpForwardingEngineP__nextHopBackpressure_m[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__notifyBurstyLinkNeighbor_m[__nesc_mote], 0, sizeof BcpForwardingEngineP__notifyBurstyLinkNeighbor_m[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__loopbackMsg[__nesc_mote], 0, sizeof BcpForwardingEngineP__loopbackMsg[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__loopbackMsgPtr[__nesc_mote], 0, sizeof BcpForwardingEngineP__loopbackMsgPtr[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__sendQe[__nesc_mote], 0, sizeof BcpForwardingEngineP__sendQe[__nesc_mote]);
  BcpForwardingEngineP__sendQeOccupied[__nesc_mote] = FALSE;
  memset((void *)&BcpForwardingEngineP__virtualQueueSize[__nesc_mote], 0, sizeof BcpForwardingEngineP__virtualQueueSize[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__dataCRCSuccessCount[__nesc_mote], 0, sizeof BcpForwardingEngineP__dataCRCSuccessCount[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__dataCRCFailCount[__nesc_mote], 0, sizeof BcpForwardingEngineP__dataCRCFailCount[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__snoopCRCSuccessCount[__nesc_mote], 0, sizeof BcpForwardingEngineP__snoopCRCSuccessCount[__nesc_mote]);
  memset((void *)&BcpForwardingEngineP__snoopCRCFailCount[__nesc_mote], 0, sizeof BcpForwardingEngineP__snoopCRCFailCount[__nesc_mote]);
  BcpForwardingEngineP__Valpha[__nesc_mote] = 0xff;
  BcpForwardingEngineP__VaSeq[__nesc_mote] = 0;
  BcpForwardingEngineP__congestNodeCount[__nesc_mote] = 0;
  memset((void *)&BcpForwardingEngineP__congestNodeId[__nesc_mote], 0, sizeof BcpForwardingEngineP__congestNodeId[__nesc_mote]);

  /* Module BcpRoutingEngineP */
  memset((void *)&BcpRoutingEngineP__routingTableActive[__nesc_mote], 0, sizeof BcpRoutingEngineP__routingTableActive[__nesc_mote]);
  memset((void *)&BcpRoutingEngineP__routingTable[__nesc_mote], 0, sizeof BcpRoutingEngineP__routingTable[__nesc_mote]);
  memset((void *)&BcpRoutingEngineP__state_is_root[__nesc_mote], 0, sizeof BcpRoutingEngineP__state_is_root[__nesc_mote]);
  BcpRoutingEngineP__running[__nesc_mote] = FALSE;

  /* Module PoolP__0 */
  memset((void *)&/*BcpC.MessagePoolP.PoolP*/PoolP__0__free[__nesc_mote], 0, sizeof /*BcpC.MessagePoolP.PoolP*/PoolP__0__free[__nesc_mote]);
  memset((void *)&/*BcpC.MessagePoolP.PoolP*/PoolP__0__index[__nesc_mote], 0, sizeof /*BcpC.MessagePoolP.PoolP*/PoolP__0__index[__nesc_mote]);
  memset((void *)&/*BcpC.MessagePoolP.PoolP*/PoolP__0__queue[__nesc_mote], 0, sizeof /*BcpC.MessagePoolP.PoolP*/PoolP__0__queue[__nesc_mote]);
  memset((void *)&/*BcpC.MessagePoolP.PoolP*/PoolP__0__pool[__nesc_mote], 0, sizeof /*BcpC.MessagePoolP.PoolP*/PoolP__0__pool[__nesc_mote]);

  /* Module PoolP__1 */
  memset((void *)&/*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[__nesc_mote], 0, sizeof /*BcpC.QEntryPoolP.PoolP*/PoolP__1__free[__nesc_mote]);
  memset((void *)&/*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[__nesc_mote], 0, sizeof /*BcpC.QEntryPoolP.PoolP*/PoolP__1__index[__nesc_mote]);
  memset((void *)&/*BcpC.QEntryPoolP.PoolP*/PoolP__1__queue[__nesc_mote], 0, sizeof /*BcpC.QEntryPoolP.PoolP*/PoolP__1__queue[__nesc_mote]);
  memset((void *)&/*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool[__nesc_mote], 0, sizeof /*BcpC.QEntryPoolP.PoolP*/PoolP__1__pool[__nesc_mote]);

  /* Module PoolP__2 */
  memset((void *)&/*BcpC.SnoopPoolP.PoolP*/PoolP__2__free[__nesc_mote], 0, sizeof /*BcpC.SnoopPoolP.PoolP*/PoolP__2__free[__nesc_mote]);
  memset((void *)&/*BcpC.SnoopPoolP.PoolP*/PoolP__2__index[__nesc_mote], 0, sizeof /*BcpC.SnoopPoolP.PoolP*/PoolP__2__index[__nesc_mote]);
  memset((void *)&/*BcpC.SnoopPoolP.PoolP*/PoolP__2__queue[__nesc_mote], 0, sizeof /*BcpC.SnoopPoolP.PoolP*/PoolP__2__queue[__nesc_mote]);
  memset((void *)&/*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool[__nesc_mote], 0, sizeof /*BcpC.SnoopPoolP.PoolP*/PoolP__2__pool[__nesc_mote]);

  /* Module StackC__0 */
  memset((void *)&/*BcpC.SendStack*/StackC__0__stack[__nesc_mote], 0, sizeof /*BcpC.SendStack*/StackC__0__stack[__nesc_mote]);
  /*BcpC.SendStack*/StackC__0__top[__nesc_mote] = 0;
  /*BcpC.SendStack*/StackC__0__bottom[__nesc_mote] = 0;
  /*BcpC.SendStack*/StackC__0__size[__nesc_mote] = 0;

  /* Module QueueC__0 */
  memset((void *)&/*BcpC.SnoopQueue*/QueueC__0__queue[__nesc_mote], 0, sizeof /*BcpC.SnoopQueue*/QueueC__0__queue[__nesc_mote]);
  /*BcpC.SnoopQueue*/QueueC__0__head[__nesc_mote] = 0;
  /*BcpC.SnoopQueue*/QueueC__0__tail[__nesc_mote] = 0;
  /*BcpC.SnoopQueue*/QueueC__0__size[__nesc_mote] = 0;

  /* Module Atm128AlarmAsyncP__0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP__inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP__lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP__oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP__compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP__compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP__overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP__overflow[__nesc_mote]);

  /* Module AlarmToTimerC__0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC__0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC__0 */

  /* Module AMQueueEntryP__0 */

  /* Module AMQueueImplP__0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote] = 2;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote]);

  /* Module AMQueueEntryP__1 */

  /* Module DummyActiveMessageP */

  /* Module BcpRateControllerP */
  BcpRateControllerP__Vmax[__nesc_mote] = 100;
  BcpRateControllerP__Valpha[__nesc_mote] = 50;
  BcpRateControllerP__seqNo[__nesc_mote] = 0;
  BcpRateControllerP__Tretx[__nesc_mote] = 0;
  BcpRateControllerP__Tthreshold[__nesc_mote] = 3;

  /* Module exponentialRandomM__0 */
  /*BcpRateControllerC.exponentialRandom.exponentialRandomM*/exponentialRandomM__0__mean_m[__nesc_mote] = 100;

  /* Module PoolP__3 */
  memset((void *)&/*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[__nesc_mote], 0, sizeof /*BcpRateControllerC.modPool.PoolP*/PoolP__3__free[__nesc_mote]);
  memset((void *)&/*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[__nesc_mote], 0, sizeof /*BcpRateControllerC.modPool.PoolP*/PoolP__3__index[__nesc_mote]);
  memset((void *)&/*BcpRateControllerC.modPool.PoolP*/PoolP__3__queue[__nesc_mote], 0, sizeof /*BcpRateControllerC.modPool.PoolP*/PoolP__3__queue[__nesc_mote]);
  memset((void *)&/*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool[__nesc_mote], 0, sizeof /*BcpRateControllerC.modPool.PoolP*/PoolP__3__pool[__nesc_mote]);

  /* Module QueueC__1 */
  memset((void *)&/*BcpRateControllerC.modQueue*/QueueC__1__queue[__nesc_mote], 0, sizeof /*BcpRateControllerC.modQueue*/QueueC__1__queue[__nesc_mote]);
  /*BcpRateControllerC.modQueue*/QueueC__1__head[__nesc_mote] = 0;
  /*BcpRateControllerC.modQueue*/QueueC__1__tail[__nesc_mote] = 0;
  /*BcpRateControllerC.modQueue*/QueueC__1__size[__nesc_mote] = 0;

  /* Module exponentialRandomM__1 */
  /*BcpCollectionExampleAppC.RandomC.exponentialRandomM*/exponentialRandomM__1__mean_m[__nesc_mote] = 666;

  /* Module SafeSerialSendM */
  memset((void *)&SafeSerialSendM__sending_m[__nesc_mote], 0, sizeof SafeSerialSendM__sending_m[__nesc_mote]);
  memset((void *)&SafeSerialSendM__serialRunning_m[__nesc_mote], 0, sizeof SafeSerialSendM__serialRunning_m[__nesc_mote]);
  memset((void *)&SafeSerialSendM__overflowCount_m[__nesc_mote], 0, sizeof SafeSerialSendM__overflowCount_m[__nesc_mote]);

  /* Module QueueC__2 */
  memset((void *)&/*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue[__nesc_mote], 0, sizeof /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__queue[__nesc_mote]);
  /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__head[__nesc_mote] = 0;
  /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__tail[__nesc_mote] = 0;
  /*BcpCollectionExampleAppC.SafeSerialSend.QueueC*/QueueC__2__size[__nesc_mote] = 0;

  /* Module PoolP__4 */
  memset((void *)&/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[__nesc_mote], 0, sizeof /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__free[__nesc_mote]);
  memset((void *)&/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[__nesc_mote], 0, sizeof /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__index[__nesc_mote]);
  memset((void *)&/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__queue[__nesc_mote], 0, sizeof /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__queue[__nesc_mote]);
  memset((void *)&/*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool[__nesc_mote], 0, sizeof /*BcpCollectionExampleAppC.SafeSerialSend.PoolC.PoolP*/PoolP__4__pool[__nesc_mote]);

  /* Module SerialActiveMessageC */

}
