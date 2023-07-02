# Problem Solving

스터디원들의 코딩문제풀이를 공유하는 저장소입니다.


## 규칙 1 : Pull Request / Merge 관련

- 본 저장소의 `main` branch를 clone하여 새로운 branch를 만듭니다. 이때, 본인이 생성한 branch명 앞에는 `{id}_`를 접두사로 붙입니다.  
  ex) `kimpro82_boj01`

- `main` branch로의 직접 commit은 허용하지 않으며, 반드시 **Pull Request** 방식으로 코드를 올려주시기 바랍니다.
  - Pull Request의 제목은 자신이 푼 문제의 범위를 충실히 대표할 수 있도록 작성합니다(아래 예시).
    ```txt
    백준 > 단계별 문제풀이 > 1. 입출력과 사칙연산
    백준 > 단계별 문제풀이 > 21. 재귀 > 6. 별 찍기 - 10
    AtCoder Beginner Contest 310 > A~C
    ```

- 문제 풀이에 관한 **질의 응답은 [Pull Request](https://github.com/KHCUProgrammingStudy/ProblemSolving/pulls) 또는 [Discussions](https://github.com/KHCUProgrammingStudy/ProblemSolving/discussions) 게시판을 이용**합니다.

- Merge 전에 최소 1명으로부터 **approval**을 받습니다.
  - 이 approval은 문제풀이 내용에 대한 검토를 포함하지 않으며, 잘못된 폴더/파일의 네이밍 내지 기존 자료들의 훼손 여부만을 검토합니다.

- Merge 요청은 반드시 **Squash and Merge** 방식으로 합니다.
  - 필요시 추가적인 코멘트를 작성합니다.


## 규칙 2 : 폴더/파일명 관련

- 다음과 같은 네이밍 규칭을 따릅니다.

  * 폴더명 : PascalCase를 기본으로 하되, 전후 단어의 관계가 계층적일 경우 underscore(`_`)를 삽입하며, 공백(` `)은 두지 않습니다(아래 예시).
    ```txt
    ├─CodingContest
    │  ├─AtCoder
    │  │  ├─ABC_001
    │  │  └─ABC_002
    │  ├─Codforces
    │  │  ├─CFR_881_Div2
    │  │  └─ECR_151_Div2
    │  └─Meta
    │      └─HackerCup
    │          └─2022
    │              └─Qualification
    └─ProblemSolving
        ├─BOJ
        │  ├─Etc
        │  └─Step
        │      ├─01
        │      └─02
        └─Programmers
            ├─PCCE_Sample
            │  ├─01
            │  └─02
            └─PCCP_Sample_Cpp
                └─01
    ```

- 파일명 : `{문제 번호}_{추가하고자 하는 문자열_}{ID}.{확장자명}`의 규칙에 따라 작성합니다(아래 예시).
  ```txt
  1000_kimpro82.c
  1001_kimpro82.cpp
  1001_WA_kimpro82.py
  1002_TLE_kimpro82.java
  ```
  * C# 등 하나의 폴더 안에 하나의 `main()` 함수만을 허용하는 언어의 경우,
    위 파일명을 폴더명으로 하여 작성하시기 바랍니다(하나의 폴더 안에 하나의 문제풀이가 들어있는 꼴이 됩니다).

- 문제풀이가 담긴 코드 파일 외의 컴파일된 실행 파일, 환경 설정과 관련한 파일, 기타 에셋 파일 등은 포함시키지 않습니다.
  (이 경우 [`.gitignore`](/.gitignore)에 해당 폴더 또는 파일을 추가합니다.)


## 기타

- 초심자의 경우, 문제풀이와 함께 깃허브 사용법을 동시에 익히기가 부담스러울 수 있습니다. 꼭 본 저장소가 아니더라도 스터디 까페 게시판 등 다양한 경로를 이용하여 코드를 공유하고 질의 응답을 주고받으시기 바랍니다.

- 파일명에 삽입된 ID, 백준 온라인 저지의 단체별 랭킹 등을 활용해 본 `README.md` 문서에 재미난(?) 컨텐츠들을 추가해볼 생각입니다.