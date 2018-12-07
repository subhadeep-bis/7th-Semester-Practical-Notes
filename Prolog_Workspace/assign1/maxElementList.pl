max_list([],0).
max_list([H|T],X):-
    max_list(T,X1),
    H >= X1,
    X is H.
max_list([H|T],X):-
    max_list(T,X1),
    H < X1,
    X is X1.
