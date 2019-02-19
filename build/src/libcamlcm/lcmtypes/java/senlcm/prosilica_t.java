/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package senlcm;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class prosilica_t implements lcm.lcm.LCMEncodable
{
    public long utime;
    public boolean self;
    public int n_attributes;
    public senlcm.prosilica_attribute_t PvAttributes[];
    public boolean start;
    public boolean stop;
 
    public prosilica_t()
    {
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0xa1780a9515c79c1dL;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(senlcm.prosilica_t.class))
            return 0L;
 
        classes.add(senlcm.prosilica_t.class);
        long hash = LCM_FINGERPRINT_BASE
             + senlcm.prosilica_attribute_t._hashRecursive(classes)
            ;
        classes.remove(classes.size() - 1);
        return (hash<<1) + ((hash>>63)&1);
    }
 
    public void encode(DataOutput outs) throws IOException
    {
        outs.writeLong(LCM_FINGERPRINT);
        _encodeRecursive(outs);
    }
 
    public void _encodeRecursive(DataOutput outs) throws IOException
    {
        outs.writeLong(this.utime); 
 
        outs.writeByte( this.self ? 1 : 0); 
 
        outs.writeInt(this.n_attributes); 
 
        for (int a = 0; a < this.n_attributes; a++) {
            this.PvAttributes[a]._encodeRecursive(outs); 
        }
 
        outs.writeByte( this.start ? 1 : 0); 
 
        outs.writeByte( this.stop ? 1 : 0); 
 
    }
 
    public prosilica_t(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public prosilica_t(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static senlcm.prosilica_t _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        senlcm.prosilica_t o = new senlcm.prosilica_t();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.utime = ins.readLong();
 
        this.self = ins.readByte()!=0;
 
        this.n_attributes = ins.readInt();
 
        this.PvAttributes = new senlcm.prosilica_attribute_t[(int) n_attributes];
        for (int a = 0; a < this.n_attributes; a++) {
            this.PvAttributes[a] = senlcm.prosilica_attribute_t._decodeRecursiveFactory(ins);
        }
 
        this.start = ins.readByte()!=0;
 
        this.stop = ins.readByte()!=0;
 
    }
 
    public senlcm.prosilica_t copy()
    {
        senlcm.prosilica_t outobj = new senlcm.prosilica_t();
        outobj.utime = this.utime;
 
        outobj.self = this.self;
 
        outobj.n_attributes = this.n_attributes;
 
        outobj.PvAttributes = new senlcm.prosilica_attribute_t[(int) n_attributes];
        for (int a = 0; a < this.n_attributes; a++) {
            outobj.PvAttributes[a] = this.PvAttributes[a].copy();
        }
 
        outobj.start = this.start;
 
        outobj.stop = this.stop;
 
        return outobj;
    }
 
}

