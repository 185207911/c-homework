# 一键编译 1_main.c ~ 5_main.c（需要 gcc 在 PATH 中，或用 -Gcc 指定路径）
param(
    [string]$Gcc = "gcc"
)

$ErrorActionPreference = "Stop"
$root = Split-Path -Parent $MyInvocation.MyCommand.Path

foreach ($src in 1..5 | ForEach-Object { Join-Path $root ($_ + "_main.c") }) {
    $exe = [System.IO.Path]::ChangeExtension($src, ".exe")
    Write-Host "==> $([System.IO.Path]::GetFileName($src))"
    & $Gcc $src -o $exe -Wall -Wextra -std=c11
    if ($LASTEXITCODE -ne 0) {
        throw "编译失败：$src"
    }
}

Write-Host "全部编译完成。" -ForegroundColor Green
