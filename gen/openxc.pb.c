/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.2.4-dev at Tue Oct  1 16:50:34 2013. */

#include "openxc.pb.h"



const pb_field_t openxc_VehicleMessage_fields[6] = {
    PB_FIELD2(  1, ENUM    , OPTIONAL, STATIC, FIRST, openxc_VehicleMessage, type, type, 0),
    PB_FIELD2(  2, MESSAGE , OPTIONAL, STATIC, OTHER, openxc_VehicleMessage, raw_message, type, &openxc_RawMessage_fields),
    PB_FIELD2(  3, MESSAGE , OPTIONAL, STATIC, OTHER, openxc_VehicleMessage, string_message, raw_message, &openxc_TranslatedStringMessage_fields),
    PB_FIELD2(  4, MESSAGE , OPTIONAL, STATIC, OTHER, openxc_VehicleMessage, numerical_message, string_message, &openxc_TranslatedNumericMessage_fields),
    PB_FIELD2(  5, MESSAGE , OPTIONAL, STATIC, OTHER, openxc_VehicleMessage, boolean_message, numerical_message, &openxc_TranslatedBooleanMessage_fields),
    PB_LAST_FIELD
};

const pb_field_t openxc_RawMessage_fields[4] = {
    PB_FIELD2(  1, INT32   , OPTIONAL, STATIC, FIRST, openxc_RawMessage, bus, bus, 0),
    PB_FIELD2(  2, UINT32  , OPTIONAL, STATIC, OTHER, openxc_RawMessage, message_id, bus, 0),
    PB_FIELD2(  3, SINT64  , OPTIONAL, STATIC, OTHER, openxc_RawMessage, data, message_id, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_TranslatedStringMessage_fields[3] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC, FIRST, openxc_TranslatedStringMessage, name, name, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC, OTHER, openxc_TranslatedStringMessage, value, name, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_TranslatedNumericMessage_fields[3] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC, FIRST, openxc_TranslatedNumericMessage, name, name, 0),
    PB_FIELD2(  2, DOUBLE  , OPTIONAL, STATIC, OTHER, openxc_TranslatedNumericMessage, value, name, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_TranslatedBooleanMessage_fields[3] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC, FIRST, openxc_TranslatedBooleanMessage, name, name, 0),
    PB_FIELD2(  2, BOOL    , OPTIONAL, STATIC, OTHER, openxc_TranslatedBooleanMessage, value, name, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
STATIC_ASSERT((pb_membersize(openxc_VehicleMessage, raw_message) < 256 && pb_membersize(openxc_VehicleMessage, string_message) < 256 && pb_membersize(openxc_VehicleMessage, numerical_message) < 256 && pb_membersize(openxc_VehicleMessage, boolean_message) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_openxc_VehicleMessage_openxc_RawMessage_openxc_TranslatedStringMessage_openxc_TranslatedNumericMessage_openxc_TranslatedBooleanMessage)
#endif

#if !defined(PB_FIELD_32BIT)
STATIC_ASSERT((pb_membersize(openxc_VehicleMessage, raw_message) < 65536 && pb_membersize(openxc_VehicleMessage, string_message) < 65536 && pb_membersize(openxc_VehicleMessage, numerical_message) < 65536 && pb_membersize(openxc_VehicleMessage, boolean_message) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_openxc_VehicleMessage_openxc_RawMessage_openxc_TranslatedStringMessage_openxc_TranslatedNumericMessage_openxc_TranslatedBooleanMessage)
#endif

/* On some platforms (such as AVR), double is really float.
 * These are not directly supported by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

