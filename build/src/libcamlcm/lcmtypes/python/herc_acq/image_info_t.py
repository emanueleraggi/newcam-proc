"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class image_info_t(object):
    __slots__ = ["utime", "path"]

    def __init__(self):
        self.utime = 0
        self.path = ""

    def encode(self):
        buf = BytesIO()
        buf.write(image_info_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">q", self.utime))
        __path_encoded = self.path.encode('utf-8')
        buf.write(struct.pack('>I', len(__path_encoded)+1))
        buf.write(__path_encoded)
        buf.write(b"\0")

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != image_info_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return image_info_t._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = image_info_t()
        self.utime = struct.unpack(">q", buf.read(8))[0]
        __path_len = struct.unpack('>I', buf.read(4))[0]
        self.path = buf.read(__path_len)[:-1].decode('utf-8', 'replace')
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if image_info_t in parents: return 0
        tmphash = (0xc245172fad3411) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if image_info_t._packed_fingerprint is None:
            image_info_t._packed_fingerprint = struct.pack(">Q", image_info_t._get_hash_recursive([]))
        return image_info_t._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

