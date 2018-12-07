length([],Acc,Acc).
length([_|T],Acc,N):-
    Ac is Acc + 1,
    length(T,Ac,N).
