require_fp;
softfloat_roundingMode = VFRM;
WRITE_FRD(f64_mul(f64(FRS1), f64(FRS2)));
set_fp_exceptions;