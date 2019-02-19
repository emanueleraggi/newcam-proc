"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class timing_config_t(object):
    __slots__ = ["timing_program"]

    def __init__(self):
        self.timing_program = ""

    def encode(self):
        buf = BytesIO()
        buf.write(timing_config_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        __timing_program_encoded = self.timing_program.encode('utf-8')
        buf.write(struct.pack('>I', len(__timing_program_encoded)+1))
        buf.write(__timing_program_encoded)
        buf.write(b"\0")

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != timing_config_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return timing_config_t._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = timing_config_t()
        __timing_program_len = struct.unpack('>I', buf.read(4))[0]
        self.timing_program = buf.read(__timing_program_len)[:-1].decode('utf-8', 'replace')
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if timing_config_t in parents: return 0
        tmphash = (0xa572bdf6ee530389) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if timing_config_t._packed_fingerprint is None:
            timing_config_t._packed_fingerprint = struct.pack(">Q", timing_config_t._get_hash_recursive([]))
        return timing_config_t._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)
