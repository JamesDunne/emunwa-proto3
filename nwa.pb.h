/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_NWA_PB_H_INCLUDED
#define PB_NWA_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _EmulationState { 
    EmulationState_NoGame = 0, 
    EmulationState_Stopped = 1, 
    EmulationState_Paused = 2, 
    EmulationState_Running = 3 
} EmulationState;

typedef enum _MemoryAccess { 
    MemoryAccess_Read = 0, 
    MemoryAccess_Write = 1, 
    MemoryAccess_ReadWrite = 2 
} MemoryAccess;

/* Struct definitions */
typedef struct _CoreMemoriesRequest { 
    char dummy_field;
} CoreMemoriesRequest;

typedef struct _CoreMemoriesResponse { 
    pb_callback_t memories; 
} CoreMemoriesResponse;

typedef struct _CoreMemoryReadMultiRequest { 
    pb_callback_t reads; 
} CoreMemoryReadMultiRequest;

typedef struct _CoreMemoryReadMultiResponse { 
    pb_callback_t reads; 
} CoreMemoryReadMultiResponse;

typedef struct _CoreMemoryReadRequest { 
    pb_callback_t name; 
    pb_callback_t regions; 
} CoreMemoryReadRequest;

typedef struct _CoreMemoryReadResponse { 
    pb_callback_t name; 
    pb_callback_t regions; 
} CoreMemoryReadResponse;

typedef struct _CoreMemoryWriteMultiRequest { 
    pb_callback_t writes; 
} CoreMemoryWriteMultiRequest;

typedef struct _CoreMemoryWriteMultiResponse { 
    pb_callback_t writes; 
} CoreMemoryWriteMultiResponse;

typedef struct _CoreMemoryWriteRequest { 
    pb_callback_t name; 
    pb_callback_t regions; 
} CoreMemoryWriteRequest;

typedef struct _CoreMemoryWriteResponse { 
    pb_callback_t name; 
    pb_callback_t regions; 
} CoreMemoryWriteResponse;

typedef struct _CoreMemory_PropertiesEntry { 
    pb_callback_t key; 
    pb_callback_t value; 
} CoreMemory_PropertiesEntry;

typedef struct _EmulationStatusRequest { 
    char dummy_field;
} EmulationStatusRequest;

typedef struct _EmulatorInfoRequest { 
    char dummy_field;
} EmulatorInfoRequest;

typedef struct _EmulatorInfoResponse { 
    pb_callback_t name; 
    pb_callback_t version; 
    pb_callback_t nwa_version; 
    pb_callback_t id; 
    pb_callback_t commands; /* TODO: user_defined... */
} EmulatorInfoResponse;

typedef struct _Command { 
    pb_size_t which_request;
    union {
        EmulatorInfoRequest emulatorInfo;
        EmulationStatusRequest emulationStatus;
        CoreMemoriesRequest coreMemories;
        CoreMemoryReadMultiRequest coreMemoryReadMulti;
        CoreMemoryWriteMultiRequest coreMemoryWriteMulti;
    } request; 
} Command;

typedef struct _CoreMemory { 
    pb_callback_t name; 
    MemoryAccess access; 
    uint32_t size; 
    pb_callback_t properties; 
} CoreMemory;

typedef struct _EmulationStatusResponse { 
    EmulationState state; 
    pb_callback_t game_id; 
} EmulationStatusResponse;

typedef struct _MemoryRegion { 
    uint32_t offset; 
    uint32_t size; 
} MemoryRegion;

typedef struct _MemoryRegionData { 
    uint32_t offset; 
    uint32_t size; 
    pb_callback_t data; 
} MemoryRegionData;

typedef struct _Response { 
    pb_size_t which_response;
    union {
        EmulatorInfoResponse emulatorInfo;
        EmulationStatusResponse emulationStatus;
        CoreMemoriesResponse coreMemories;
        CoreMemoryReadMultiResponse coreMemoryReadMulti;
        CoreMemoryWriteMultiResponse coreMemoryWriteMulti;
    } response; 
} Response;


/* Helper constants for enums */
#define _EmulationState_MIN EmulationState_NoGame
#define _EmulationState_MAX EmulationState_Running
#define _EmulationState_ARRAYSIZE ((EmulationState)(EmulationState_Running+1))

#define _MemoryAccess_MIN MemoryAccess_Read
#define _MemoryAccess_MAX MemoryAccess_ReadWrite
#define _MemoryAccess_ARRAYSIZE ((MemoryAccess)(MemoryAccess_ReadWrite+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define Command_init_default                     {0, {EmulatorInfoRequest_init_default}}
#define Response_init_default                    {0, {EmulatorInfoResponse_init_default}}
#define EmulatorInfoRequest_init_default         {0}
#define EmulatorInfoResponse_init_default        {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define EmulationStatusRequest_init_default      {0}
#define EmulationStatusResponse_init_default     {_EmulationState_MIN, {{NULL}, NULL}}
#define CoreMemoriesRequest_init_default         {0}
#define CoreMemory_init_default                  {{{NULL}, NULL}, _MemoryAccess_MIN, 0, {{NULL}, NULL}}
#define CoreMemory_PropertiesEntry_init_default  {{{NULL}, NULL}, {{NULL}, NULL}}
#define CoreMemoriesResponse_init_default        {{{NULL}, NULL}}
#define MemoryRegion_init_default                {0, 0}
#define MemoryRegionData_init_default            {0, 0, {{NULL}, NULL}}
#define CoreMemoryReadRequest_init_default       {{{NULL}, NULL}, {{NULL}, NULL}}
#define CoreMemoryReadResponse_init_default      {{{NULL}, NULL}, {{NULL}, NULL}}
#define CoreMemoryWriteMultiRequest_init_default {{{NULL}, NULL}}
#define CoreMemoryWriteMultiResponse_init_default {{{NULL}, NULL}}
#define CoreMemoryReadMultiRequest_init_default  {{{NULL}, NULL}}
#define CoreMemoryReadMultiResponse_init_default {{{NULL}, NULL}}
#define CoreMemoryWriteRequest_init_default      {{{NULL}, NULL}, {{NULL}, NULL}}
#define CoreMemoryWriteResponse_init_default     {{{NULL}, NULL}, {{NULL}, NULL}}
#define Command_init_zero                        {0, {EmulatorInfoRequest_init_zero}}
#define Response_init_zero                       {0, {EmulatorInfoResponse_init_zero}}
#define EmulatorInfoRequest_init_zero            {0}
#define EmulatorInfoResponse_init_zero           {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define EmulationStatusRequest_init_zero         {0}
#define EmulationStatusResponse_init_zero        {_EmulationState_MIN, {{NULL}, NULL}}
#define CoreMemoriesRequest_init_zero            {0}
#define CoreMemory_init_zero                     {{{NULL}, NULL}, _MemoryAccess_MIN, 0, {{NULL}, NULL}}
#define CoreMemory_PropertiesEntry_init_zero     {{{NULL}, NULL}, {{NULL}, NULL}}
#define CoreMemoriesResponse_init_zero           {{{NULL}, NULL}}
#define MemoryRegion_init_zero                   {0, 0}
#define MemoryRegionData_init_zero               {0, 0, {{NULL}, NULL}}
#define CoreMemoryReadRequest_init_zero          {{{NULL}, NULL}, {{NULL}, NULL}}
#define CoreMemoryReadResponse_init_zero         {{{NULL}, NULL}, {{NULL}, NULL}}
#define CoreMemoryWriteMultiRequest_init_zero    {{{NULL}, NULL}}
#define CoreMemoryWriteMultiResponse_init_zero   {{{NULL}, NULL}}
#define CoreMemoryReadMultiRequest_init_zero     {{{NULL}, NULL}}
#define CoreMemoryReadMultiResponse_init_zero    {{{NULL}, NULL}}
#define CoreMemoryWriteRequest_init_zero         {{{NULL}, NULL}, {{NULL}, NULL}}
#define CoreMemoryWriteResponse_init_zero        {{{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define CoreMemoriesResponse_memories_tag        1
#define CoreMemoryReadMultiRequest_reads_tag     1
#define CoreMemoryReadMultiResponse_reads_tag    1
#define CoreMemoryReadRequest_name_tag           1
#define CoreMemoryReadRequest_regions_tag        2
#define CoreMemoryReadResponse_name_tag          1
#define CoreMemoryReadResponse_regions_tag       2
#define CoreMemoryWriteMultiRequest_writes_tag   1
#define CoreMemoryWriteMultiResponse_writes_tag  1
#define CoreMemoryWriteRequest_name_tag          1
#define CoreMemoryWriteRequest_regions_tag       2
#define CoreMemoryWriteResponse_name_tag         1
#define CoreMemoryWriteResponse_regions_tag      2
#define CoreMemory_PropertiesEntry_key_tag       1
#define CoreMemory_PropertiesEntry_value_tag     2
#define EmulatorInfoResponse_name_tag            1
#define EmulatorInfoResponse_version_tag         2
#define EmulatorInfoResponse_nwa_version_tag     3
#define EmulatorInfoResponse_id_tag              4
#define EmulatorInfoResponse_commands_tag        5
#define Command_emulatorInfo_tag                 1
#define Command_emulationStatus_tag              2
#define Command_coreMemories_tag                 3
#define Command_coreMemoryReadMulti_tag          4
#define Command_coreMemoryWriteMulti_tag         5
#define CoreMemory_name_tag                      1
#define CoreMemory_access_tag                    2
#define CoreMemory_size_tag                      3
#define CoreMemory_properties_tag                4
#define EmulationStatusResponse_state_tag        1
#define EmulationStatusResponse_game_id_tag      2
#define MemoryRegion_offset_tag                  1
#define MemoryRegion_size_tag                    2
#define MemoryRegionData_offset_tag              1
#define MemoryRegionData_size_tag                2
#define MemoryRegionData_data_tag                3
#define Response_emulatorInfo_tag                1
#define Response_emulationStatus_tag             2
#define Response_coreMemories_tag                3
#define Response_coreMemoryReadMulti_tag         4
#define Response_coreMemoryWriteMulti_tag        5

/* Struct field encoding specification for nanopb */
#define Command_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (request,emulatorInfo,request.emulatorInfo),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (request,emulationStatus,request.emulationStatus),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (request,coreMemories,request.coreMemories),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (request,coreMemoryReadMulti,request.coreMemoryReadMulti),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (request,coreMemoryWriteMulti,request.coreMemoryWriteMulti),   5)
#define Command_CALLBACK NULL
#define Command_DEFAULT NULL
#define Command_request_emulatorInfo_MSGTYPE EmulatorInfoRequest
#define Command_request_emulationStatus_MSGTYPE EmulationStatusRequest
#define Command_request_coreMemories_MSGTYPE CoreMemoriesRequest
#define Command_request_coreMemoryReadMulti_MSGTYPE CoreMemoryReadMultiRequest
#define Command_request_coreMemoryWriteMulti_MSGTYPE CoreMemoryWriteMultiRequest

#define Response_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response,emulatorInfo,response.emulatorInfo),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response,emulationStatus,response.emulationStatus),   2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response,coreMemories,response.coreMemories),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response,coreMemoryReadMulti,response.coreMemoryReadMulti),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (response,coreMemoryWriteMulti,response.coreMemoryWriteMulti),   5)
#define Response_CALLBACK NULL
#define Response_DEFAULT NULL
#define Response_response_emulatorInfo_MSGTYPE EmulatorInfoResponse
#define Response_response_emulationStatus_MSGTYPE EmulationStatusResponse
#define Response_response_coreMemories_MSGTYPE CoreMemoriesResponse
#define Response_response_coreMemoryReadMulti_MSGTYPE CoreMemoryReadMultiResponse
#define Response_response_coreMemoryWriteMulti_MSGTYPE CoreMemoryWriteMultiResponse

#define EmulatorInfoRequest_FIELDLIST(X, a) \

#define EmulatorInfoRequest_CALLBACK NULL
#define EmulatorInfoRequest_DEFAULT NULL

#define EmulatorInfoResponse_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, SINGULAR, STRING,   version,           2) \
X(a, CALLBACK, SINGULAR, STRING,   nwa_version,       3) \
X(a, CALLBACK, SINGULAR, STRING,   id,                4) \
X(a, CALLBACK, REPEATED, STRING,   commands,          5)
#define EmulatorInfoResponse_CALLBACK pb_default_field_callback
#define EmulatorInfoResponse_DEFAULT NULL

#define EmulationStatusRequest_FIELDLIST(X, a) \

#define EmulationStatusRequest_CALLBACK NULL
#define EmulationStatusRequest_DEFAULT NULL

#define EmulationStatusResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    state,             1) \
X(a, CALLBACK, SINGULAR, STRING,   game_id,           2)
#define EmulationStatusResponse_CALLBACK pb_default_field_callback
#define EmulationStatusResponse_DEFAULT NULL

#define CoreMemoriesRequest_FIELDLIST(X, a) \

#define CoreMemoriesRequest_CALLBACK NULL
#define CoreMemoriesRequest_DEFAULT NULL

#define CoreMemory_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, STATIC,   SINGULAR, UENUM,    access,            2) \
X(a, STATIC,   SINGULAR, UINT32,   size,              3) \
X(a, CALLBACK, REPEATED, MESSAGE,  properties,        4)
#define CoreMemory_CALLBACK pb_default_field_callback
#define CoreMemory_DEFAULT NULL
#define CoreMemory_properties_MSGTYPE CoreMemory_PropertiesEntry

#define CoreMemory_PropertiesEntry_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   key,               1) \
X(a, CALLBACK, SINGULAR, STRING,   value,             2)
#define CoreMemory_PropertiesEntry_CALLBACK pb_default_field_callback
#define CoreMemory_PropertiesEntry_DEFAULT NULL

#define CoreMemoriesResponse_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  memories,          1)
#define CoreMemoriesResponse_CALLBACK pb_default_field_callback
#define CoreMemoriesResponse_DEFAULT NULL
#define CoreMemoriesResponse_memories_MSGTYPE CoreMemory

#define MemoryRegion_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   offset,            1) \
X(a, STATIC,   SINGULAR, UINT32,   size,              2)
#define MemoryRegion_CALLBACK NULL
#define MemoryRegion_DEFAULT NULL

#define MemoryRegionData_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   offset,            1) \
X(a, STATIC,   SINGULAR, UINT32,   size,              2) \
X(a, CALLBACK, SINGULAR, BYTES,    data,              3)
#define MemoryRegionData_CALLBACK pb_default_field_callback
#define MemoryRegionData_DEFAULT NULL

#define CoreMemoryReadRequest_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, REPEATED, MESSAGE,  regions,           2)
#define CoreMemoryReadRequest_CALLBACK pb_default_field_callback
#define CoreMemoryReadRequest_DEFAULT NULL
#define CoreMemoryReadRequest_regions_MSGTYPE MemoryRegion

#define CoreMemoryReadResponse_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, REPEATED, MESSAGE,  regions,           2)
#define CoreMemoryReadResponse_CALLBACK pb_default_field_callback
#define CoreMemoryReadResponse_DEFAULT NULL
#define CoreMemoryReadResponse_regions_MSGTYPE MemoryRegionData

#define CoreMemoryWriteMultiRequest_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  writes,            1)
#define CoreMemoryWriteMultiRequest_CALLBACK pb_default_field_callback
#define CoreMemoryWriteMultiRequest_DEFAULT NULL
#define CoreMemoryWriteMultiRequest_writes_MSGTYPE CoreMemoryWriteRequest

#define CoreMemoryWriteMultiResponse_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  writes,            1)
#define CoreMemoryWriteMultiResponse_CALLBACK pb_default_field_callback
#define CoreMemoryWriteMultiResponse_DEFAULT NULL
#define CoreMemoryWriteMultiResponse_writes_MSGTYPE CoreMemoryWriteResponse

#define CoreMemoryReadMultiRequest_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  reads,             1)
#define CoreMemoryReadMultiRequest_CALLBACK pb_default_field_callback
#define CoreMemoryReadMultiRequest_DEFAULT NULL
#define CoreMemoryReadMultiRequest_reads_MSGTYPE CoreMemoryReadRequest

#define CoreMemoryReadMultiResponse_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  reads,             1)
#define CoreMemoryReadMultiResponse_CALLBACK pb_default_field_callback
#define CoreMemoryReadMultiResponse_DEFAULT NULL
#define CoreMemoryReadMultiResponse_reads_MSGTYPE CoreMemoryReadResponse

#define CoreMemoryWriteRequest_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, REPEATED, MESSAGE,  regions,           2)
#define CoreMemoryWriteRequest_CALLBACK pb_default_field_callback
#define CoreMemoryWriteRequest_DEFAULT NULL
#define CoreMemoryWriteRequest_regions_MSGTYPE MemoryRegionData

#define CoreMemoryWriteResponse_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, REPEATED, MESSAGE,  regions,           2)
#define CoreMemoryWriteResponse_CALLBACK pb_default_field_callback
#define CoreMemoryWriteResponse_DEFAULT NULL
#define CoreMemoryWriteResponse_regions_MSGTYPE MemoryRegion

extern const pb_msgdesc_t Command_msg;
extern const pb_msgdesc_t Response_msg;
extern const pb_msgdesc_t EmulatorInfoRequest_msg;
extern const pb_msgdesc_t EmulatorInfoResponse_msg;
extern const pb_msgdesc_t EmulationStatusRequest_msg;
extern const pb_msgdesc_t EmulationStatusResponse_msg;
extern const pb_msgdesc_t CoreMemoriesRequest_msg;
extern const pb_msgdesc_t CoreMemory_msg;
extern const pb_msgdesc_t CoreMemory_PropertiesEntry_msg;
extern const pb_msgdesc_t CoreMemoriesResponse_msg;
extern const pb_msgdesc_t MemoryRegion_msg;
extern const pb_msgdesc_t MemoryRegionData_msg;
extern const pb_msgdesc_t CoreMemoryReadRequest_msg;
extern const pb_msgdesc_t CoreMemoryReadResponse_msg;
extern const pb_msgdesc_t CoreMemoryWriteMultiRequest_msg;
extern const pb_msgdesc_t CoreMemoryWriteMultiResponse_msg;
extern const pb_msgdesc_t CoreMemoryReadMultiRequest_msg;
extern const pb_msgdesc_t CoreMemoryReadMultiResponse_msg;
extern const pb_msgdesc_t CoreMemoryWriteRequest_msg;
extern const pb_msgdesc_t CoreMemoryWriteResponse_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define Command_fields &Command_msg
#define Response_fields &Response_msg
#define EmulatorInfoRequest_fields &EmulatorInfoRequest_msg
#define EmulatorInfoResponse_fields &EmulatorInfoResponse_msg
#define EmulationStatusRequest_fields &EmulationStatusRequest_msg
#define EmulationStatusResponse_fields &EmulationStatusResponse_msg
#define CoreMemoriesRequest_fields &CoreMemoriesRequest_msg
#define CoreMemory_fields &CoreMemory_msg
#define CoreMemory_PropertiesEntry_fields &CoreMemory_PropertiesEntry_msg
#define CoreMemoriesResponse_fields &CoreMemoriesResponse_msg
#define MemoryRegion_fields &MemoryRegion_msg
#define MemoryRegionData_fields &MemoryRegionData_msg
#define CoreMemoryReadRequest_fields &CoreMemoryReadRequest_msg
#define CoreMemoryReadResponse_fields &CoreMemoryReadResponse_msg
#define CoreMemoryWriteMultiRequest_fields &CoreMemoryWriteMultiRequest_msg
#define CoreMemoryWriteMultiResponse_fields &CoreMemoryWriteMultiResponse_msg
#define CoreMemoryReadMultiRequest_fields &CoreMemoryReadMultiRequest_msg
#define CoreMemoryReadMultiResponse_fields &CoreMemoryReadMultiResponse_msg
#define CoreMemoryWriteRequest_fields &CoreMemoryWriteRequest_msg
#define CoreMemoryWriteResponse_fields &CoreMemoryWriteResponse_msg

/* Maximum encoded size of messages (where known) */
/* Command_size depends on runtime parameters */
/* Response_size depends on runtime parameters */
/* EmulatorInfoResponse_size depends on runtime parameters */
/* EmulationStatusResponse_size depends on runtime parameters */
/* CoreMemory_size depends on runtime parameters */
/* CoreMemory_PropertiesEntry_size depends on runtime parameters */
/* CoreMemoriesResponse_size depends on runtime parameters */
/* MemoryRegionData_size depends on runtime parameters */
/* CoreMemoryReadRequest_size depends on runtime parameters */
/* CoreMemoryReadResponse_size depends on runtime parameters */
/* CoreMemoryWriteMultiRequest_size depends on runtime parameters */
/* CoreMemoryWriteMultiResponse_size depends on runtime parameters */
/* CoreMemoryReadMultiRequest_size depends on runtime parameters */
/* CoreMemoryReadMultiResponse_size depends on runtime parameters */
/* CoreMemoryWriteRequest_size depends on runtime parameters */
/* CoreMemoryWriteResponse_size depends on runtime parameters */
#define CoreMemoriesRequest_size                 0
#define EmulationStatusRequest_size              0
#define EmulatorInfoRequest_size                 0
#define MemoryRegion_size                        12

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
