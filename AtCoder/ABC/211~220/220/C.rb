N = gets.to_i
A = gets.split.map(&:to_i)
X = gets.to_i
sum = A.sum
base_cnt = X / sum
t = X % sum
A.each_with_index do |ai, i|
  t -= ai
  if t < 0
    puts(base_cnt * N + (i+1))
    exit 0
  end
end
