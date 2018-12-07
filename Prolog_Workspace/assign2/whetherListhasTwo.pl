twoTest(2,[]):- write("Exactly 2 elements").
twoTest(2, [H|T]) :- write("Not Exactly 2 elements").
twoTest(N, []) :- 
    N<2,
    write("Not Exactly 2 elements").

twoTest(N, [H|T]) :- 
    N<2,
    N1 is N + 1,
    twoTest(N1, T).
