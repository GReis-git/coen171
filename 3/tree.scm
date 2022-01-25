(define (insert lst node) 
  (cond
	((null? lst)
	 (list node '() '()))
	((> x (car lst))
	 (list (car lst) (cadr lst) (insert (caadr lst) x)))
	((< x (car lst))
	 (list (car lst) (insert (cadr lst) x) (caadr lst)))
	((= x (car lst))
	 lst)))

(define (member? lst x)
  (cond
	((null? lst) #f)
	((> x (car lst))
	 (member (caadr lst) x))
	((< x (car lst))
	 (member (cadr lst) x))
	((= x (car lst)) #t)
