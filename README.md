# Problem Solving

KHCU 프로그래밍 스터디員들의 코딩문제풀이를 공유하는 저장소입니다.


## 활동 목표

- 컴퓨터공학의 핵심 영역 중의 하나인 자료구조와 알고리즘에 관한 지식과 코드 구현 능력을 함양합니다.  
  → 7~8월 2개월간 시중의 코딩 대회 및 코딩 테스트에서 일정 수준 이상 성과를 거둘 수 있는 수준에 도달합니다.

- PS(Problem Solving)이라는 새로운 취미생활을 얻습니다.  
  → 자신의 문제풀이 코드를 정리하며 깃허브와 친해지기에도 좋습니다!


## 활동 방법

- 다음 문제풀이 혹은 대회 사이트의 문제풀이 코드를 본 저장소에 업로드합니다.
  - [Baekjoon Online Judge > 단계별로 풀어보기](https://www.acmicpc.net/step) (* [단계별 난이도 가이드](https://github.com/KHCUProgrammingStudy/ProblemSolving/issues/2))
  - [Programmers > PCCP.E > 샘플 문제](https://certi.programmers.co.kr/about/sample)
  - [AtCoder > Contests](https://atcoder.jp/contests/)
  - [CodeForces > Contests](https://codeforces.com/contests)
  - [Meta Hacker Cup](https://www.facebook.com/codingcompetitions/hacker-cup)

- 반드시 위에 열거된 범위 안에서만 문제를 풀어야 한다는 의미는 아닙니다.

- 대회 문제풀이의 경우, 대회 중 서로 상의하거나 대회가 끝나기 전에 코드를 공개된 원격 저장소에 commit해서는 **절대로 안 됩니다**.


## 저장소 사용 규칙

- 본 저장소의 사용은 다음과 같은 규칙을 따릅니다.

  <details>
    <summary>1. Pull Request / Merge</summary>

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
    - 이 approval은 문제풀이 내용에 대한 검토를 포함하지 않으며, 잘못된 폴더/파일의 네이밍 내지 기존 자료들의 훼손 여부만을 확인합니다.

  - Merge 요청은 반드시 **Squash and Merge** 방식으로 합니다.
    - 필요시 추가적인 코멘트를 작성합니다.
  </details>
  <details>
    <summary>2. 폴더/파일 네이밍</summary>

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
      │  └─MetaHackerCup
      │      └─2022
      │          └─Qualification
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
    1002_WA_kimpro82.py
    1003_TLE_kimpro82.java
    ```
    * C# 등 하나의 폴더 안에 하나의 `main()` 함수만을 허용하는 언어의 경우,
      위 파일명을 폴더명으로 하여 작성하시기 바랍니다(하나의 폴더 안에 하나의 문제풀이가 들어있는 꼴이 됩니다).

  - 문제풀이가 담긴 코드 파일 외의 컴파일된 실행 파일, 환경 설정과 관련한 파일, 기타 에셋 파일 등은 포함시키지 않습니다.
    (이 경우 [`.gitignore`](/.gitignore)에 해당 폴더 또는 파일을 추가합니다.)
  </details>


## 언어 선택

- 어떤 언어로든 문제를 풀 수 있으나, C++과 파이썬이 대세로 알려져 있습니다.

- 특정 기업의 코딩 테스트 통과라는 구체적인 목표를 가지고 있는 경우, 해당 기업의 공고를 사전에 잘 확인하고 준비하셔야 합니다. 대부분 C++/파이썬이면 대응이 되는 분위기지만 간혹 회사/직렬에 따라 다른 언어를 요구하는 경우가 있습니다.

- 코딩문제풀이는 깊은 수준의 문법적 지식을 요구하지 않습니다. 그보다는 알고리즘이 중요합니다. 하나의 언어로 어떤 문제를 풀 수 있다면, 다른 언어로 다시 같은 문제를 푸는 건 그렇게 어렵지 않습니다. 지금의 언어 선택이 결정적인 갈림길이라 생각하지 마시고, 지금 손이 가는 걸로 한 문제라도 더 푸는 쪽을 권장합니다.


## 참고 도서

- [코딩 테스트를 위한 자료 구조와 알고리즘 with C++ (존 캐리 외 / 황선규 역 / 길벗 / 2020)](https://search.shopping.naver.com/book/catalog/32479809044)

- [이것이 취업을 위한 코딩 테스트다 with 파이썬 (나동빈 / 한빛미디어 / 2020)](https://search.shopping.naver.com/book/catalog/32441237189)

- [알고리즘 문제 해결 전략 세트 (구종만 / 인사이트 / 2012)](https://search.shopping.naver.com/book/catalog/32438183956)


## 기타

- 초심자의 경우, 문제풀이와 함께 깃허브 사용법을 동시에 익히기가 부담스러울 수 있습니다. 꼭 본 저장소가 아니더라도 스터디 까페 게시판 등 다양한 경로를 이용하여 코드를 공유하고 질의 응답을 주고받으시기 바랍니다.

- 파일명에 삽입된 ID, 백준 온라인 저지의 단체별 랭킹 등을 활용해 본 `README.md` 문서에 재미난(?) 컨텐츠들을 추가해볼 생각입니다.
