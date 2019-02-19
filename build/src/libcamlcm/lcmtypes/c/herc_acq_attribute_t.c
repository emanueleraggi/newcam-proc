// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by lcm-gen

#include <string.h>
#include "herc_acq_attribute_t.h"

static int __herc_acq_attribute_t_hash_computed;
static uint64_t __herc_acq_attribute_t_hash;

uint64_t __herc_acq_attribute_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __herc_acq_attribute_t_get_hash)
            return 0;

    __lcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__herc_acq_attribute_t_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x12204fd2578d0266LL
         + __string_hash_recursive(&cp)
         + __string_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __herc_acq_attribute_t_get_hash(void)
{
    if (!__herc_acq_attribute_t_hash_computed) {
        __herc_acq_attribute_t_hash = (int64_t)__herc_acq_attribute_t_hash_recursive(NULL);
        __herc_acq_attribute_t_hash_computed = 1;
    }

    return __herc_acq_attribute_t_hash;
}

int __herc_acq_attribute_t_encode_array(void *buf, int offset, int maxlen, const herc_acq_attribute_t *p, int elements)
{
    int pos = 0, element;
    int thislen;

    for (element = 0; element < elements; element++) {

        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &(p[element].label), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &(p[element].value), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int herc_acq_attribute_t_encode(void *buf, int offset, int maxlen, const herc_acq_attribute_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __herc_acq_attribute_t_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __herc_acq_attribute_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int __herc_acq_attribute_t_encoded_array_size(const herc_acq_attribute_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {

        size += __string_encoded_array_size(&(p[element].label), 1);

        size += __string_encoded_array_size(&(p[element].value), 1);

    }
    return size;
}

int herc_acq_attribute_t_encoded_size(const herc_acq_attribute_t *p)
{
    return 8 + __herc_acq_attribute_t_encoded_array_size(p, 1);
}

int __herc_acq_attribute_t_decode_array(const void *buf, int offset, int maxlen, herc_acq_attribute_t *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++) {

        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, &(p[element].label), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, &(p[element].value), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __herc_acq_attribute_t_decode_array_cleanup(herc_acq_attribute_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __string_decode_array_cleanup(&(p[element].label), 1);

        __string_decode_array_cleanup(&(p[element].value), 1);

    }
    return 0;
}

int herc_acq_attribute_t_decode(const void *buf, int offset, int maxlen, herc_acq_attribute_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __herc_acq_attribute_t_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __herc_acq_attribute_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int herc_acq_attribute_t_decode_cleanup(herc_acq_attribute_t *p)
{
    return __herc_acq_attribute_t_decode_array_cleanup(p, 1);
}

int __herc_acq_attribute_t_clone_array(const herc_acq_attribute_t *p, herc_acq_attribute_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __string_clone_array(&(p[element].label), &(q[element].label), 1);

        __string_clone_array(&(p[element].value), &(q[element].value), 1);

    }
    return 0;
}

herc_acq_attribute_t *herc_acq_attribute_t_copy(const herc_acq_attribute_t *p)
{
    herc_acq_attribute_t *q = (herc_acq_attribute_t*) malloc(sizeof(herc_acq_attribute_t));
    __herc_acq_attribute_t_clone_array(p, q, 1);
    return q;
}

void herc_acq_attribute_t_destroy(herc_acq_attribute_t *p)
{
    __herc_acq_attribute_t_decode_array_cleanup(p, 1);
    free(p);
}

int herc_acq_attribute_t_publish(lcm_t *lc, const char *channel, const herc_acq_attribute_t *p)
{
      int max_data_size = herc_acq_attribute_t_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = herc_acq_attribute_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = lcm_publish (lc, channel, buf, data_size);
      free (buf);
      return status;
}

struct _herc_acq_attribute_t_subscription_t {
    herc_acq_attribute_t_handler_t user_handler;
    void *userdata;
    lcm_subscription_t *lc_h;
};
static
void herc_acq_attribute_t_handler_stub (const lcm_recv_buf_t *rbuf,
                            const char *channel, void *userdata)
{
    int status;
    herc_acq_attribute_t p;
    memset(&p, 0, sizeof(herc_acq_attribute_t));
    status = herc_acq_attribute_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding herc_acq_attribute_t!!!\n", status);
        return;
    }

    herc_acq_attribute_t_subscription_t *h = (herc_acq_attribute_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    herc_acq_attribute_t_decode_cleanup (&p);
}

herc_acq_attribute_t_subscription_t* herc_acq_attribute_t_subscribe (lcm_t *lcm,
                    const char *channel,
                    herc_acq_attribute_t_handler_t f, void *userdata)
{
    herc_acq_attribute_t_subscription_t *n = (herc_acq_attribute_t_subscription_t*)
                       malloc(sizeof(herc_acq_attribute_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->lc_h = lcm_subscribe (lcm, channel,
                                 herc_acq_attribute_t_handler_stub, n);
    if (n->lc_h == NULL) {
        fprintf (stderr,"couldn't reg herc_acq_attribute_t LCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int herc_acq_attribute_t_subscription_set_queue_capacity (herc_acq_attribute_t_subscription_t* subs,
                              int num_messages)
{
    return lcm_subscription_set_queue_capacity (subs->lc_h, num_messages);
}

int herc_acq_attribute_t_unsubscribe(lcm_t *lcm, herc_acq_attribute_t_subscription_t* hid)
{
    int status = lcm_unsubscribe (lcm, hid->lc_h);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe herc_acq_attribute_t_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

