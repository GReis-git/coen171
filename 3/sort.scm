;sort.scm read
;
;fun filter f nil = nil
;  | filter f (h :: t) = if f h then h :: filter f t else filter f t;
;
;fun quicksort nil = nil
;  | quicksort (h :: t) =
;  	let
; 		fun below x = x < h
;  		fun above x = x >= h
;	in
;  		quicksort (filter below t) @ h :: quicksort (filter above t)
;  	end;

;filter given in class
(define (filter f lst)
  (cond
	((null? lst) lst)
	((f (car lst))
	 (cons (car lst) (filter f (cdr lst))))
	(else (filter f (cdr lst)))))

(define (quicksort f lst)
  (if (null? lst) lst
	;else
	(let*
	  ((h (car lst))
	   (t (cdr lst))
	   (below (lambda (x) (< x h)))
	   (above (lambda (x) (>= x h))))
	  ; reformating ML code to prefix notation
	  ; @ (quicksort (filter below t), (:: h, quicksort (filter above t)))
	  (append (quicksort (filter below t)) (cons h (quicksort(filter above t)))))))
