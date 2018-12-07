sum([],Acc,Acc).
sum([H|T],Acc, Sum):-
    Sum1 is H + Acc,
    sum(T,Sum1,Sum).
