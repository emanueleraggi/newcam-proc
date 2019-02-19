/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <lcm/lcm_coretypes.h>

#ifndef __herc_acq_herc_acq_status_t_hpp__
#define __herc_acq_herc_acq_status_t_hpp__

#include <string>

namespace herc_acq
{

class herc_acq_status_t
{
    public:
        int64_t    utime;

        int32_t    status;

        std::string key;

        std::string label;

        std::string display;

        std::string message;

        int8_t     alertOnWarning;

        int8_t     alertOnError;

        int8_t     errorOnExpire;

        float      ttl_seconds;

        double     importance;

    public:
        enum { STATUS_OK = 0 };
        enum { STATUS_ALERT = 1 };
        enum { STATUS_WARN = 2 };
        enum { STATUS_ERROR = 3 };

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "herc_acq_status_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int herc_acq_status_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int herc_acq_status_t::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int herc_acq_status_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t herc_acq_status_t::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* herc_acq_status_t::getTypeName()
{
    return "herc_acq_status_t";
}

int herc_acq_status_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->status, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* key_cstr = (char*) this->key.c_str();
    tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &key_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* label_cstr = (char*) this->label.c_str();
    tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &label_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* display_cstr = (char*) this->display.c_str();
    tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &display_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* message_cstr = (char*) this->message.c_str();
    tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &message_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->alertOnWarning, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->alertOnError, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &this->errorOnExpire, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->ttl_seconds, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->importance, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int herc_acq_status_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->status, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    int32_t __key_len__;
    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__key_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__key_len__ > maxlen - pos) return -1;
    this->key.assign(((const char*)buf) + offset + pos, __key_len__ - 1);
    pos += __key_len__;

    int32_t __label_len__;
    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__label_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__label_len__ > maxlen - pos) return -1;
    this->label.assign(((const char*)buf) + offset + pos, __label_len__ - 1);
    pos += __label_len__;

    int32_t __display_len__;
    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__display_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__display_len__ > maxlen - pos) return -1;
    this->display.assign(((const char*)buf) + offset + pos, __display_len__ - 1);
    pos += __display_len__;

    int32_t __message_len__;
    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__message_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__message_len__ > maxlen - pos) return -1;
    this->message.assign(((const char*)buf) + offset + pos, __message_len__ - 1);
    pos += __message_len__;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->alertOnWarning, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->alertOnError, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &this->errorOnExpire, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->ttl_seconds, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->importance, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int herc_acq_status_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += this->key.size() + 4 + 1;
    enc_size += this->label.size() + 4 + 1;
    enc_size += this->display.size() + 4 + 1;
    enc_size += this->message.size() + 4 + 1;
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __boolean_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t herc_acq_status_t::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0x354f682c6d1362f2LL;
    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
