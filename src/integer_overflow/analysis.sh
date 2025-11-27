scan-build \
  -analyzer-config aggressive-binary-operation-simplification=true \
  -enable-checker alpha \
  -enable-checker core \
  -enable-checker cplusplus \
  -enable-checker security \
  -enable-checker unix \
  -enable-checker deadcode \
  -enable-checker nullability \
  -enable-checker optin \
  -disable-checker security.insecureAPI \
  -v \
  -o ./all_checkers_report \
  clang -c *.c