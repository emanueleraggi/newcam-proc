"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class attribute_t(object):
    __slots__ = ["label", "value"]

    def __init__(self):
        self.label = ""
        self.value = ""

    def encode(self):
        buf = BytesIO()
        buf.write(attribute_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        __label_encoded = self.label.encode('utf-8')
        buf.write(struct.pack('>I', len(__label_encoded)+1))
        buf.write(__label_encoded)
        buf.write(b"\0")
        __value_encoded = self.value.encode('utf-8')
        buf.write(struct.pack('>I', len(__value_encoded)+1))
        buf.write(__value_encoded)
        buf.write(b"\0")

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != attribute_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return attribute_t._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = attribute_t()
        __label_len = struct.unpack('>I', buf.read(4))[0]
        self.label = buf.read(__label_len)[:-1].decode('utf-8', 'replace')
        __value_len = struct.unpack('>I', buf.read(4))[0]
        self.value = buf.read(__value_len)[:-1].decode('utf-8', 'replace')
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if attribute_t in parents: return 0
        tmphash = (0x12204fd2578d0266) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if attribute_t._packed_fingerprint is None:
            attribute_t._packed_fingerprint = struct.pack(">Q", attribute_t._get_hash_recursive([]))
        return attribute_t._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

