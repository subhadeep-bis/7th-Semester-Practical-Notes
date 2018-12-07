max([],Acc,Acc).
max([H|T],Acc,N):-
    H > Acc,
    Ac = H, !,
    max(T,Ac,N).
max([H|T],Acc,N):-
    H =< Acc, !,
    max(T,Acc,N).
