N,K,A = gets.split.map(&:to_i)
t = (A + K - 1) % N
if t == 0
  puts N
else
  puts t
end
