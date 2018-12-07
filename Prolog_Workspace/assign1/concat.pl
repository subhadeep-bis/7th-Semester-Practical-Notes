concat([],L,L).
concat([H|T], L, [H|R]):-
    concat(T,L,R).