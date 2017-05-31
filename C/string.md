## string

### strcpy
- 문자열을 복사하는 함수이다.
- 원형 : ``` char* strcpy(char* dest, const char* src);```
- src를 dest에 복사한다.
- example) - ``` strcpy(string1, string2);``` 문자열의 이름을 넘겨준다.
- string.h에 포함되어 있다.

### strcmp
- 문자열을 비교한다.
- 원형 : ``` int strcmp(const char* src1, const char* src2);```
- src1이 src2와 같은지 비교한다.
- example)  ``` strcmp(string, string2)```
- src1이 src2와 같으면 0을 반환하고, 문자열이 크면 1, 문자열이 작으면 -1을 반환한다.
