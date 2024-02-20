#include "tasks.h"

/*	Task 02. The Treasure Seekers and gold coins (2) [�������� �������� � ������� ������]
*
*	N ��������� �������� ����� K ������� ����� � ������ ��������� �� �������, � ��������� ������, ������� ���������,
*	������ ������ �� �������������������. ����������, ������� ������� ����� ��������� �� ������ ����?
*
*	������ ������� ������ [input]
*	�� ���� ����� ��� ����� ������������� ����� N � K.
*
*	������ �������� ������ [output]
*	�������� ���� ����� ����� - ����� �� ������.
*
*	[sample function  input 1] (������ ������������ � ������� ����������): 5 27
*	[sample function output 1] (������ ������������� �������� ����������): 2
*
*	[ input 2]: 2 30
*	[output 2]: 0
*
*	[ input 3]: 3 1
*	[output 3]: 1
*/

int task02(int seeker, int coin) {

	return coin % seeker;
}