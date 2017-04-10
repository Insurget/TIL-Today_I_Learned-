# Hello World by C#
## 코드

```using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            System.Console.WriteLine("Hello World!");
            System.Console.Write("Hello World!");
        }
    }
}
```
### 코드 설명
- using : 사용한다는 의미를 나타냄.
- namespace : 관련된 구조체, 클래스, 델리게이트, 인터페이스 등을 그룹화 한것을 말함.
- System.Console : .NET Framework 클래스. WriteLine은 화면에 데이터를 한줄로 출력하는 메서드, Write는 그냥 출력.
