# [유틸리티 / 파일명 일괄 변경 프로그램](/README.md#저장소-사용-규칙)

  아래 파일명 규칙에 따라 파일명에 접미사 `_{id}`를 붙이는 일괄 작업을 수행하는 프로그램입니다. 사실 VBScript는 deprecated되는 언어인데 제가 최근에 꽂혀서 굳이 이걸로 만들어버렸습니다. 윈도우에서만 됩니다. 죄송합니다.

  ```clojure
  {문제 번호}_{추가하고자 하는 문자열_}{ID}.{확장자명}
  ```

## 사용 방법

접미사(suffix) 기능만 필요하지만, 만드는 김에 접두사(prefix)까지 다 만들었습니다.

```bat
Usage: AddFix.vbs <substring> <prefix/suffix/replace> <text1> <text2(optional only when replace)> <test(optional)>
```
```bat
Example 1: cscript AddFix.vbs .txt prefix pf_ test
Example 2: cscript AddFix.vbs .txt suffix _sf
Example 3: cscript AddFix.vbs .txt replace pf_ " " test
```

혹시 접미사를 잘못 붙였을 경우, git의 discard 기능을 이용하거나 본 프로그램의 `replace` 옵션으로 다시 수정하실 수 있습니다.

파일명을 변경하고자 하는 폴더에 `AddFix.vbs`를 복사하여 실행한 후, commit 시에는 `/Utility` 폴더 외에 중복하여 저장되지 않도록 삭제해주시기 바랍니다.
