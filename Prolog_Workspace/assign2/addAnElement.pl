list_insert(D, L, X):-
    list_delete(D, X, L).

list_delete(D, [D|List1], List1).
list_delete(D, [Y|List1], [Y|List2]) :-
    list_delete(D, List1, List2).
