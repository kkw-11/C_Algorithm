# C_Algorithm

## Introduction
* 기본적인 자료구조 이론 및 알고리즘 함수 라이브러리를 밑바닥부터 구현해보기
* 참고자료 : Do it! 자료구조와 함께 배우는 알고리즘 입문 C 언어 편, 윤성우의 열혈 자료구조 

## Description
### ex02
  * stack 자료구조 구현해보기

### ex03
  * Array 라이브러리 구현해보기
  * Array 자료구조를 절차지향 프로그래밍으로 구현하고 유지보수를 위하여 SW refactoring 
  * 반복적으로 사용되는 데이터와 상태함수를 추상화하여 객체지향적으로 코드를 구현하고, 객체에 존재하는 데이터를 외부로부터 보호 캡슐화를 구현함 
  * 매개 변수 인자 C++ 템플릿 이론 구현 연습 (템플릿: Java의 제네릭처럼 클래스 내부에서 사용할 타입을 클래스 정의 시에 설정하지 않고, 클래스 사용 시에 지정하고 사용하는 것이다. )


### ex05
  * 재귀 함수
  * 재귀 함수의 조건은 종료조건이 존재해야 하고 재귀함수를 실행해가면서 점점 종료조건에 수렴해 가야한다. 
  * 함수는 메모리의 스택구조로 저장되고 스택 영역에 차례대로 저장되는 함수의 호출 정보를 스택 프레임(stack frame)이라고 합니다.
  * 재귀 함수도 함수이므로 스택구조로 저장되고 마지막에 호출 된 재귀 함수가 가장 먼저 반환되고 가장 먼저 호출된 재귀함수가 가장 나중에 반환된다.
  * 재귀함수의 동작 방법을 이해하기 위해서는 스택구조로 그려서 이해할 수 도 있지만 트리구조로 그려서 이해하면 조금 더 쉽게 이해할 수 있다. 특히 비선형 재귀의 경우는 트리구조로 이해하면 선형구조보다 더 쉽게 이해가 가능하다. 
  * DFS(깊이 우선 탐색)은 재귀함수를 이용하여 구현 하면 간단하게 구현 가능하다.(정점을 방문하는 과정을 함수 호출, 더 이상 방문할 정점이 없을 경우 이전 정점으로 돌아오는 과정을 함수 리턴으로 생각해 구현합니다.)

### ex06
  * 정렬
  * 선택 정렬=> 기준보다 작은 값을 찾아 선택하고 정렬시키고 다음 기준에 대해서 반복 수행 (n개의 원소에 대해서 n^2의 시간복잡도를 가짐)
  * 버블 정렬=> 이웃한 원소에 대해서 우측 값이 더 크다면 교환 하면서 버블이 올라 가듯 큰 값을 가장 우측에 차례로 정렬 시킴(n개의 원소에 대해서 n^2의 시간복잡도를 가짐)
  * 삽입 정렬=> 2번째 원소(1번 인덱스)를 기준으로 좌측에 기준보다 작은 값이 나오기 전까지 비교하면서 큰 값과 작은 값 사이에 삽입하면서 정렬 시켜 나감(n개의 원소에 대해서 최대 n^2의 시간복잡도를 가짐)
  * 퀵 정렬=> 분할 정복에 기초한 정렬 알고리즘, Pivot을 기준으로 왼쪽에는 pivot보다 작은 값들만 오른쪽에는 pivot보다 큰 값들만 정렬 시키면서 다시 좌우 구간을 첫 번째 방법과 동일하게 재귀적으로 구현함(분할 될 수 없을 때까지) (N개의 원소에 대해 모두 정확히 반으로 나누어 질때 깊이가 logN, 각 깊이마다 N번 비교하므로 시간복잡도 NlogN)

### ex09
  * 그래프 완전 탐색 
  * DFS 깊이 우선 탐색 구현
  * BFS 넓이 우선 탐색 


### ex10
  * 최단경로, 다익스트라 알고리즘

### ex11
  * 다이나믹 프로그래밍 알고리즘
  * 피보나치 수열을 다이나믹 프로그래밍으로 구현해보기
  * LCS 문자열 비교를 다이나믹 프로그래밍 알고리즘으로 구현해보기

### ex12
  * 탐욕 알고리즘
  * 부분해에서 최적해를 선택하면서 최종 최적해를 구해가는 알고리즘
  * 최소 동전사용 잔돈반환, 최대가치를 담는 냅색 알고리즘

### ex13
  * heap, priority queue구현
  * STL 사용법(make_heap, push_heap, pop_heap)   

### ex14
  * 절차지향 방식으로 CLI 전화번호부 개발해보고 객체지향 방식으로 refactoring
    * 기능
      * 전화번호 등록, 전화번호 검색, 전화번호 삭제, 전화번호 정렬
