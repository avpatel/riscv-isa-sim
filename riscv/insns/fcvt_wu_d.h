require_fp;
softfloat_roundingMode = RM;
WRITE_RD(sext32(f64_to_ui32(FRS1, RM, true)));
set_fp_exceptions;
