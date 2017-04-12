## C# Data type
- 모든 .NET 프로그래밍 언어는 .NET의 **Common Type System**에 정의된 .NET Data Type을 사용함.
- C#에서는 int, double, string과 같은 **C# 키워드**와
- System.Double, System.Int32, System.String과 같은 **.NET 데이터 클래스**로 데이터 타입을 표현함.


C# Data Type | .NET CTS | 설명
------ | ------ | -----
boolean형
bool | System.Boolean | True or False
정수형| - | -
byte | System.Byte | 8비트 unsigned integer
sbyte | System.Sbyte | 8비트 signed integer
short | System.Int16 | 16비트 signed integer
int | System.Int32 | 32비트 signed integer
long | System.Int64 | 64비트 signed integer
ushort | System.UInt16 | 16비트 unsigned integer
uint | System. UInt32 | 32비트 unsigned integer
ulong | System.UInt64 | 64비트 unsigned integer
실수형 | - | -
float | System. Single | 32비트 sngle precision 부동소수점 숫자
double | System.Double | 64비트 double precision 부동소수점 숫자
demical[^1] | System.demical | 128비트 Demical
문자형 | - | -
char | System.Char | 16비트 유니코드 문자
string | System.String | 유니코드 문자열
-- | -- | --
X | System.DataTime | 날짜와 시간, 
object | System.Object | 모든 타입의 기본 클래스로 모든 유형을 포함할 수 있음.


---

[^1] : float과 double 간의 선택 조건은 정밀도의 차이에 불과하지만 Decimal의 경우 반올림 오차가 허용 되지 않는 회계 계산에 적합하다.