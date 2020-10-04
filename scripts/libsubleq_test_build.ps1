
if (-not (Test-Path .\bin)) {
    md .\bin | Out-Null
}

pushd .\bin

clang-cl -g `
    -std=c99 `
    -I ..\include `
    ..\test\libsubleq\main.c `
    -o libsubleq_test.exe

popd