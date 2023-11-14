@REM Test AddFix_b.vbs
@REM 2023.10.30 (Adjusted : 2023.11.14)

@REM cscript AddFix.vbs .txt prefix pf_
cscript AddFix.vbs .txt suffix _sf
cscript AddFix.vbs .txt replace _sf " "
