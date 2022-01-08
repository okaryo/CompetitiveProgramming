t = gets.to_i
ft = lambda do |x|
  x*x + 2*x + 3
end
puts ft.call(ft.call(ft.call(t) + t) + ft.call(ft.call(t)))
