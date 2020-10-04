
if (-not (Test-Path .\bin)) {
    md .\bin | Out-Null
}

Push-Location .\bin

clang-cl /Zi `
    /std:c99 `
    /I ..\include `
    /o libsubleq_test.exe `
    -Wno-unused-command-line-argument `
    ..\test\libsubleq\main.c

Pop-Location