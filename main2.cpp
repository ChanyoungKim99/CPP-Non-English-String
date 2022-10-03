/*
한글과 컴퓨터

영어 = ASCII code 
char = 1byte

---------------------------------------------
한글 = 조합형 한글, 완성형 한글

조합형 한글

ㄱ ㅏ => 가
ㅣ .  => ㅏ

자음 (19) : ㄱ ㄲ ㄴ ㄷ ㄸ ,...
모음 (21) : ㅏ ㅐ ㅑ ㅓ ㅕ ,...
받침 (27) : ㄱ ㄲ ㄳ, ㄴ, .....

한글은 2byte를 사용한다.

그래서 때에 따라 오류가 날 수 밖에 없다.


완성형 한글

우리가 쓰는 컴퓨터는 완성형 한글을 사용

한글판 ASCII TABLE 
한글로 사용할 수 있는 모든 문자들 존재

11172 글자가 나온다.
이 중, 일상에서 쓸만한 문자들만 추려서
7~8천자가 남게 되었다.

UNICODE가 완성형 한글 채택

ASCII CODE  =  char ch = 'a';
			   char str1[] { "Hello" };
			   const char* str2 = "Hello";

UNICODE    =  wchar_t uniCh = L'가';
			  wchar_t uniStr1[] { L"안녕" };
		const wchar_t* uniStr2 = L"안녕";
*/