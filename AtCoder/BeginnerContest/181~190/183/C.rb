n,k = gets.split.map(&:to_i)
t = n.times.map{gets.split.map(&:to_i)}

a = (1..(n-1)).to_a.permutation.to_a
ans = 0
a.each do |ai|
  sum = t[0][ai.first]
  (n-1).times do |i|
    next if i == 0
    sum += t[ai[i-1]][ai[i]]
  end
  sum += t[ai.last][0]
  ans += 1 if sum == k
end
puts ans
