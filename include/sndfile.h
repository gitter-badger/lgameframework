


enum
{
 SF_FORMAT_WAV = 0x010000,
 SF_FORMAT_AIFF = 0x020000,
 SF_FORMAT_AU = 0x030000,
 SF_FORMAT_RAW = 0x040000,
 SF_FORMAT_PAF = 0x050000,
 SF_FORMAT_SVX = 0x060000,
 SF_FORMAT_NIST = 0x070000,
 SF_FORMAT_VOC = 0x080000,
 SF_FORMAT_IRCAM = 0x0A0000,
 SF_FORMAT_W64 = 0x0B0000,
 SF_FORMAT_MAT4 = 0x0C0000,
 SF_FORMAT_MAT5 = 0x0D0000,
 SF_FORMAT_PVF = 0x0E0000,
 SF_FORMAT_XI = 0x0F0000,
 SF_FORMAT_HTK = 0x100000,
 SF_FORMAT_SDS = 0x110000,
 SF_FORMAT_AVR = 0x120000,
 SF_FORMAT_WAVEX = 0x130000,
 SF_FORMAT_SD2 = 0x160000,
 SF_FORMAT_FLAC = 0x170000,
 SF_FORMAT_CAF = 0x180000,
 SF_FORMAT_WVE = 0x190000,
 SF_FORMAT_OGG = 0x200000,
 SF_FORMAT_MPC2K = 0x210000,
 SF_FORMAT_RF64 = 0x220000,



 SF_FORMAT_PCM_S8 = 0x0001,
 SF_FORMAT_PCM_16 = 0x0002,
 SF_FORMAT_PCM_24 = 0x0003,
 SF_FORMAT_PCM_32 = 0x0004,

 SF_FORMAT_PCM_U8 = 0x0005,

 SF_FORMAT_FLOAT = 0x0006,
 SF_FORMAT_DOUBLE = 0x0007,

 SF_FORMAT_ULAW = 0x0010,
 SF_FORMAT_ALAW = 0x0011,
 SF_FORMAT_IMA_ADPCM = 0x0012,
 SF_FORMAT_MS_ADPCM = 0x0013,

 SF_FORMAT_GSM610 = 0x0020,
 SF_FORMAT_VOX_ADPCM = 0x0021,

 SF_FORMAT_G721_32 = 0x0030,
 SF_FORMAT_G723_24 = 0x0031,
 SF_FORMAT_G723_40 = 0x0032,

 SF_FORMAT_DWVW_12 = 0x0040,
 SF_FORMAT_DWVW_16 = 0x0041,
 SF_FORMAT_DWVW_24 = 0x0042,
 SF_FORMAT_DWVW_N = 0x0043,

 SF_FORMAT_DPCM_8 = 0x0050,
 SF_FORMAT_DPCM_16 = 0x0051,

 SF_FORMAT_VORBIS = 0x0060,

 SF_FORMAT_ALAC_16 = 0x0070,
 SF_FORMAT_ALAC_20 = 0x0071,
 SF_FORMAT_ALAC_24 = 0x0072,
 SF_FORMAT_ALAC_32 = 0x0073,



 SF_ENDIAN_FILE = 0x00000000,
 SF_ENDIAN_LITTLE = 0x10000000,
 SF_ENDIAN_BIG = 0x20000000,
 SF_ENDIAN_CPU = 0x30000000,

 SF_FORMAT_SUBMASK = 0x0000FFFF,
 SF_FORMAT_TYPEMASK = 0x0FFF0000,
 SF_FORMAT_ENDMASK = 0x30000000
} ;







enum
{ SFC_GET_LIB_VERSION = 0x1000,
 SFC_GET_LOG_INFO = 0x1001,
 SFC_GET_CURRENT_SF_INFO = 0x1002,


 SFC_GET_NORM_DOUBLE = 0x1010,
 SFC_GET_NORM_FLOAT = 0x1011,
 SFC_SET_NORM_DOUBLE = 0x1012,
 SFC_SET_NORM_FLOAT = 0x1013,
 SFC_SET_SCALE_FLOAT_INT_READ = 0x1014,
 SFC_SET_SCALE_INT_FLOAT_WRITE = 0x1015,

 SFC_GET_SIMPLE_FORMAT_COUNT = 0x1020,
 SFC_GET_SIMPLE_FORMAT = 0x1021,

 SFC_GET_FORMAT_INFO = 0x1028,

 SFC_GET_FORMAT_MAJOR_COUNT = 0x1030,
 SFC_GET_FORMAT_MAJOR = 0x1031,
 SFC_GET_FORMAT_SUBTYPE_COUNT = 0x1032,
 SFC_GET_FORMAT_SUBTYPE = 0x1033,

 SFC_CALC_SIGNAL_MAX = 0x1040,
 SFC_CALC_NORM_SIGNAL_MAX = 0x1041,
 SFC_CALC_MAX_ALL_CHANNELS = 0x1042,
 SFC_CALC_NORM_MAX_ALL_CHANNELS = 0x1043,
 SFC_GET_SIGNAL_MAX = 0x1044,
 SFC_GET_MAX_ALL_CHANNELS = 0x1045,

 SFC_SET_ADD_PEAK_CHUNK = 0x1050,
 SFC_SET_ADD_HEADER_PAD_CHUNK = 0x1051,

 SFC_UPDATE_HEADER_NOW = 0x1060,
 SFC_SET_UPDATE_HEADER_AUTO = 0x1061,

 SFC_FILE_TRUNCATE = 0x1080,

 SFC_SET_RAW_START_OFFSET = 0x1090,

 SFC_SET_DITHER_ON_WRITE = 0x10A0,
 SFC_SET_DITHER_ON_READ = 0x10A1,

 SFC_GET_DITHER_INFO_COUNT = 0x10A2,
 SFC_GET_DITHER_INFO = 0x10A3,

 SFC_GET_EMBED_FILE_INFO = 0x10B0,

 SFC_SET_CLIPPING = 0x10C0,
 SFC_GET_CLIPPING = 0x10C1,

 SFC_GET_CUE_COUNT = 0x10CD,
 SFC_GET_CUE = 0x10CE,
 SFC_SET_CUE = 0x10CF,

 SFC_GET_INSTRUMENT = 0x10D0,
 SFC_SET_INSTRUMENT = 0x10D1,

 SFC_GET_LOOP_INFO = 0x10E0,

 SFC_GET_BROADCAST_INFO = 0x10F0,
 SFC_SET_BROADCAST_INFO = 0x10F1,

 SFC_GET_CHANNEL_MAP_INFO = 0x1100,
 SFC_SET_CHANNEL_MAP_INFO = 0x1101,

 SFC_RAW_DATA_NEEDS_ENDSWAP = 0x1110,


 SFC_WAVEX_SET_AMBISONIC = 0x1200,
 SFC_WAVEX_GET_AMBISONIC = 0x1201,






 SFC_RF64_AUTO_DOWNGRADE = 0x1210,

 SFC_SET_VBR_ENCODING_QUALITY = 0x1300,
 SFC_SET_COMPRESSION_LEVEL = 0x1301,


 SFC_SET_CART_INFO = 0x1400,
 SFC_GET_CART_INFO = 0x1401,


 SFC_TEST_IEEE_FLOAT_REPLACE = 0x6001,







 SFC_SET_ADD_DITHER_ON_WRITE = 0x1070,
 SFC_SET_ADD_DITHER_ON_READ = 0x1071
} ;
enum
{ SF_STR_TITLE = 0x01,
 SF_STR_COPYRIGHT = 0x02,
 SF_STR_SOFTWARE = 0x03,
 SF_STR_ARTIST = 0x04,
 SF_STR_COMMENT = 0x05,
 SF_STR_DATE = 0x06,
 SF_STR_ALBUM = 0x07,
 SF_STR_LICENSE = 0x08,
 SF_STR_TRACKNUMBER = 0x09,
 SF_STR_GENRE = 0x10
} ;
enum
{
 SF_FALSE = 0,
 SF_TRUE = 1,


 SFM_READ = 0x10,
 SFM_WRITE = 0x20,
 SFM_RDWR = 0x30,

 SF_AMBISONIC_NONE = 0x40,
 SF_AMBISONIC_B_FORMAT = 0x41
} ;







enum
{ SF_ERR_NO_ERROR = 0,
 SF_ERR_UNRECOGNISED_FORMAT = 1,
 SF_ERR_SYSTEM = 2,
 SF_ERR_MALFORMED_FILE = 3,
 SF_ERR_UNSUPPORTED_ENCODING = 4
} ;





enum
{ SF_CHANNEL_MAP_INVALID = 0,
 SF_CHANNEL_MAP_MONO = 1,
 SF_CHANNEL_MAP_LEFT,
 SF_CHANNEL_MAP_RIGHT,
 SF_CHANNEL_MAP_CENTER,
 SF_CHANNEL_MAP_FRONT_LEFT,
 SF_CHANNEL_MAP_FRONT_RIGHT,
 SF_CHANNEL_MAP_FRONT_CENTER,
 SF_CHANNEL_MAP_REAR_CENTER,
 SF_CHANNEL_MAP_REAR_LEFT,
 SF_CHANNEL_MAP_REAR_RIGHT,
 SF_CHANNEL_MAP_LFE,
 SF_CHANNEL_MAP_FRONT_LEFT_OF_CENTER,
 SF_CHANNEL_MAP_FRONT_RIGHT_OF_CENTER,
 SF_CHANNEL_MAP_SIDE_LEFT,
 SF_CHANNEL_MAP_SIDE_RIGHT,
 SF_CHANNEL_MAP_TOP_CENTER,
 SF_CHANNEL_MAP_TOP_FRONT_LEFT,
 SF_CHANNEL_MAP_TOP_FRONT_RIGHT,
 SF_CHANNEL_MAP_TOP_FRONT_CENTER,
 SF_CHANNEL_MAP_TOP_REAR_LEFT,
 SF_CHANNEL_MAP_TOP_REAR_RIGHT,
 SF_CHANNEL_MAP_TOP_REAR_CENTER,

 SF_CHANNEL_MAP_AMBISONIC_B_W,
 SF_CHANNEL_MAP_AMBISONIC_B_X,
 SF_CHANNEL_MAP_AMBISONIC_B_Y,
 SF_CHANNEL_MAP_AMBISONIC_B_Z,

 SF_CHANNEL_MAP_MAX
} ;




typedef struct SNDFILE_tag SNDFILE ;
typedef @TYPEOF_SF_COUNT_T@ sf_count_t ;
struct SF_INFO
{ sf_count_t frames ;
 int samplerate ;
 int channels ;
 int format ;
 int sections ;
 int seekable ;
} ;

typedef struct SF_INFO SF_INFO ;
typedef struct
{ int format ;
 const char *name ;
 const char *extension ;
} SF_FORMAT_INFO ;







enum
{ SFD_DEFAULT_LEVEL = 0,
 SFD_CUSTOM_LEVEL = 0x40000000,

 SFD_NO_DITHER = 500,
 SFD_WHITE = 501,
 SFD_TRIANGULAR_PDF = 502
} ;

typedef struct
{ int type ;
 double level ;
 const char *name ;
} SF_DITHER_INFO ;





typedef struct
{ sf_count_t offset ;
 sf_count_t length ;
} SF_EMBED_FILE_INFO ;





typedef struct
{ int32_t indx ;
 uint32_t position ;
 int32_t fcc_chunk ;
 int32_t chunk_start ;
 int32_t block_start ;
 uint32_t sample_offset ;
 char name [256] ;
} SF_CUE_POINT ;







typedef struct { uint32_t cue_count ; SF_CUE_POINT cue_points [100] ; } SF_CUES ;





enum
{


 SF_LOOP_NONE = 800,
 SF_LOOP_FORWARD,
 SF_LOOP_BACKWARD,
 SF_LOOP_ALTERNATING
} ;

typedef struct
{ int gain ;
 char basenote, detune ;
 char velocity_lo, velocity_hi ;
 char key_lo, key_hi ;
 int loop_count ;

 struct
 { int mode ;
  uint32_t start ;
  uint32_t end ;
  uint32_t count ;
 } loops [16] ;
} SF_INSTRUMENT ;




typedef struct
{
 short time_sig_num ;
 short time_sig_den ;
 int loop_mode ;

 int num_beats ;



 float bpm ;



 int root_key ;
 int future [6] ;
} SF_LOOP_INFO ;
typedef struct { char description [256] ; char originator [32] ; char originator_reference [32] ; char origination_date [10] ; char origination_time [8] ; uint32_t time_reference_low ; uint32_t time_reference_high ; short version ; char umid [64] ; char reserved [190] ; uint32_t coding_history_size ; char coding_history [256] ; } SF_BROADCAST_INFO ;

struct SF_CART_TIMER
{ char usage [4] ;
 int32_t value ;
} ;

typedef struct SF_CART_TIMER SF_CART_TIMER ;
typedef struct { char version [4] ; char title [64] ; char artist [64] ; char cut_id [64] ; char client_id [64] ; char category [64] ; char classification [64] ; char out_cue [64] ; char start_date [10] ; char start_time [8] ; char end_date [10] ; char end_time [8] ; char producer_app_id [64] ; char producer_app_version [64] ; char user_def [64] ; int32_t level_reference ; SF_CART_TIMER post_timers [8] ; char reserved [276] ; char url [1024] ; uint32_t tag_text_size ; char tag_text [256] ; } SF_CART_INFO ;



typedef sf_count_t (*sf_vio_get_filelen) (void *user_data) ;
typedef sf_count_t (*sf_vio_seek) (sf_count_t offset, int whence, void *user_data) ;
typedef sf_count_t (*sf_vio_read) (void *ptr, sf_count_t count, void *user_data) ;
typedef sf_count_t (*sf_vio_write) (const void *ptr, sf_count_t count, void *user_data) ;
typedef sf_count_t (*sf_vio_tell) (void *user_data) ;

struct SF_VIRTUAL_IO
{ sf_vio_get_filelen get_filelen ;
 sf_vio_seek seek ;
 sf_vio_read read ;
 sf_vio_write write ;
 sf_vio_tell tell ;
} ;

typedef struct SF_VIRTUAL_IO SF_VIRTUAL_IO ;
SNDFILE* sf_open (const char *path, int mode, SF_INFO *sfinfo) ;
SNDFILE* sf_open_fd (int fd, int mode, SF_INFO *sfinfo, int close_desc) ;

SNDFILE* sf_open_virtual (SF_VIRTUAL_IO *sfvirtual, int mode, SF_INFO *sfinfo, void *user_data) ;






int sf_error (SNDFILE *sndfile) ;






const char* sf_strerror (SNDFILE *sndfile) ;







const char* sf_error_number (int errnum) ;







int sf_perror (SNDFILE *sndfile) ;
int sf_error_str (SNDFILE *sndfile, char* str, size_t len) ;




int sf_command (SNDFILE *sndfile, int command, void *data, int datasize) ;




int sf_format_check (const SF_INFO *info) ;
enum
{ SF_SEEK_SET = SEEK_SET,
 SF_SEEK_CUR = SEEK_CUR,
 SF_SEEK_END = SEEK_END
} ;

sf_count_t sf_seek (SNDFILE *sndfile, sf_count_t frames, int whence) ;
int sf_set_string (SNDFILE *sndfile, int str_type, const char* str) ;

const char* sf_get_string (SNDFILE *sndfile, int str_type) ;




const char * sf_version_string (void) ;
int sf_current_byterate (SNDFILE *sndfile) ;




sf_count_t sf_read_raw (SNDFILE *sndfile, void *ptr, sf_count_t bytes) ;
sf_count_t sf_write_raw (SNDFILE *sndfile, const void *ptr, sf_count_t bytes) ;
sf_count_t sf_readf_short (SNDFILE *sndfile, short *ptr, sf_count_t frames) ;
sf_count_t sf_writef_short (SNDFILE *sndfile, const short *ptr, sf_count_t frames) ;

sf_count_t sf_readf_int (SNDFILE *sndfile, int *ptr, sf_count_t frames) ;
sf_count_t sf_writef_int (SNDFILE *sndfile, const int *ptr, sf_count_t frames) ;

sf_count_t sf_readf_float (SNDFILE *sndfile, float *ptr, sf_count_t frames) ;
sf_count_t sf_writef_float (SNDFILE *sndfile, const float *ptr, sf_count_t frames) ;

sf_count_t sf_readf_double (SNDFILE *sndfile, double *ptr, sf_count_t frames) ;
sf_count_t sf_writef_double (SNDFILE *sndfile, const double *ptr, sf_count_t frames) ;







sf_count_t sf_read_short (SNDFILE *sndfile, short *ptr, sf_count_t items) ;
sf_count_t sf_write_short (SNDFILE *sndfile, const short *ptr, sf_count_t items) ;

sf_count_t sf_read_int (SNDFILE *sndfile, int *ptr, sf_count_t items) ;
sf_count_t sf_write_int (SNDFILE *sndfile, const int *ptr, sf_count_t items) ;

sf_count_t sf_read_float (SNDFILE *sndfile, float *ptr, sf_count_t items) ;
sf_count_t sf_write_float (SNDFILE *sndfile, const float *ptr, sf_count_t items) ;

sf_count_t sf_read_double (SNDFILE *sndfile, double *ptr, sf_count_t items) ;
sf_count_t sf_write_double (SNDFILE *sndfile, const double *ptr, sf_count_t items) ;







int sf_close (SNDFILE *sndfile) ;







void sf_write_sync (SNDFILE *sndfile) ;
struct SF_CHUNK_INFO
{ char id [64] ;
 unsigned id_size ;
 unsigned datalen ;
 void *data ;
} ;

typedef struct SF_CHUNK_INFO SF_CHUNK_INFO ;






int sf_set_chunk (SNDFILE * sndfile, const SF_CHUNK_INFO * chunk_info) ;




typedef struct SF_CHUNK_ITERATOR SF_CHUNK_ITERATOR ;
SF_CHUNK_ITERATOR *
sf_get_chunk_iterator (SNDFILE * sndfile, const SF_CHUNK_INFO * chunk_info) ;
SF_CHUNK_ITERATOR *
sf_next_chunk_iterator (SF_CHUNK_ITERATOR * iterator) ;
int
sf_get_chunk_size (const SF_CHUNK_ITERATOR * it, SF_CHUNK_INFO * chunk_info) ;
int
sf_get_chunk_data (const SF_CHUNK_ITERATOR * it, SF_CHUNK_INFO * chunk_info) ;
