@REM Test AddFix_b.vbs
@REM 2023.10.30 (Adjusted : 2023.11.14)

cscript AddFix.vbs .txt prefix pf_
@REM cscript AddFix.vbs .txt suffix _sf
cscript AddFix.vbs .txt replace pf_ " "
