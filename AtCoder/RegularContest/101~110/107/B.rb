N,K = gets.split.map(&:to_i)
ans = 0
2.upto(2*N) do |x|
  y = x - K
  next if y < 2
  next if N+N < x || N+N < y
  x_c = [x-1, 2*N+1-x].min
  y_c = [y-1, 2*N+1-y].min
  ans += x_c*y_c
end
puts(ans)
