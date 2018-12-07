rev(L,X):-
    reva(L,[],X).
reva([],Acc,Acc).
reva([H|T], Acc, X):-
    Ac = [ H | Acc ],
    reva(T, Ac, X).
