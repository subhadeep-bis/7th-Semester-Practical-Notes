len_same([],[]):- writeln("Yes, Same Length"), !.
len_same([],_):- writeln("Not Same Length"), !.
len_same(_,[]):- writeln("Not Same Length"), !.

len_same([_|T1],[_|T2]):-
    len_same(T1,T2).
