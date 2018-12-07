permutationsort(List,Sorted):-
 permutation(List,Sorted),
 is_sorted(Sorted).

is_sorted([]).
is_sorted([_]).
is_sorted([X,Y|T]):-X=<Y,is_sorted([Y|T]).
