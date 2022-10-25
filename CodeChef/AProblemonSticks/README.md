Problem
Read problem statements in Hindi, Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
On a sunny day, Akbar and Birbal were taking a leisurely walk in palace gardens. Suddenly, Akbar noticed a bunch of sticks on the ground and decided to test Birbal's wits.

There are NN stick holders with negligible size (numbered 11 through NN) in a row on the ground. Akbar places all the sticks in them vertically; for each valid ii, the initial height of the stick in the ii-th holder is A_iA 
i
​
 . Birbal has a stick cutter and his task is to completely cut all these sticks, i.e. reduce the heights of all sticks to 00. He may perform zero or more operations; in each operation, he should do the following:

Choose an integer HH and fix the cutter at the height HH above the ground.
The cutter moves from the 11-st to the NN-th stick holder. Whenever it encounters a stick whose current height is greater than HH, it cuts this stick down to height HH (i.e. for a stick with height h \gt Hh>H, it removes its upper part with length h-Hh−H).
All the upper parts of sticks that are cut in one operation must have equal lengths. Otherwise, the operation may not be performed.
For example, if the heights of sticks are initially [5, 3, 5][5,3,5], then some valid values for HH in the first operation are 33 and 44 ― the cutter cuts the upper parts of two sticks and their lengths are [2, 2][2,2] and [1, 1][1,1] respectively. H = 2H=2 is an invalid choice because it would cut the upper parts of all three sticks with lengths [3, 1, 3][3,1,3], which are not all equal.

Akbar wants Birbal to completely cut all sticks in the minimum possible number of operations. If you want to be friends with Birbal, help him solve the problem.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains a single integer NN.
The second line contains NN space-separated integers A_1, A_2, \ldots, A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
 .
Output
For each test case, print a single line containing one integer ― the minimum number of operations needed to completely cut all the sticks.

Constraints
1 \le T \le 501≤T≤50
1 \le N \le 10^51≤N≤10 
5
 
0 \le A_i \le 10^90≤A 
i
​
 ≤10^9
  for each valid ii
Subtasks
Subtask #1 (20 points): N \le 50N≤50
Subtask #2 (80 points): original constraints

Sample 1:
Input
1
3
1 2 3
output
3
Explanation:
Example case 1: Birbal may perform the following three operations:

Fix the cutter at H = 2H=2. The heights of the sticks after this operation are [1, 2, 2][1,2,2].
Fix the cutter at H = 1H=1. The heights of the sticks after this operation are [1, 1, 1][1,1,1].
Fix the cutter at H = 0H=0. After this operation, all sticks are completely cut.
