항상 첫 줄에

#include <stdio.h>
이렇게 적어줬는데 이유를 모르게 무작정 따라만 했다.

#include <stdio.h>

int main(void) {

	return 0;
}
기본 뼈대가 이렇다기에 이렇게 매번 작성을 하고 코드들을 작성을 했다.

이유가 무엇일까 ?


#include <stdio.h>
#include : 포함시킨다는거다. 무엇을 ? <stdio.h>라는 것을

그렇다면 <stdio.h>는 무엇일까 ?


풀어쓰자면 standard input output header file 라는 뜻이다.

표준 입출력 파일


말하는 입출력은 어떤 것일까 ?

키보드, 마우스, 스캐너, 마이크 등과 같은 입력 장치 중 표준은 키보드

모니터, 프린터, 스피커 등 출력 장치 중 표준은 모니터

이렇게 된다.


그렇다면 stdio.h 파일은 어디 있을까 ? 그건 컴파일러마다 다르다.

보통은 컴파일러가 설치된 디렉터리 아채 include 디렉터리 아래에 있다.


stdio.h 파일은 언제 사용할까 ?

putchar
printf
puts

getchar
scanf
gets

이처럼 기본 입출력 함수를 사용할 때와

fopen
fgets
fgetc
fprintf
fputc
fputs

이렇게 파일 입출력 함수를 사용할때다.

사실 stdio.h 파일 안에는

함수의 원형이 선언되어 있습니다.

위에서 말한 함수의 생김새가 있다는 말이다.