n = gets.to_i
p = [0, *gets.split.map(&:to_i)]
p_sum = p.sum
exist = Array.new(n+1) { Array.new(p_sum+1, false) }
exist[0][0] = true
1.upto(n) do |i|
  0.upto(p_sum+1) do |j|
    if exist[i-1][j]
      exist[i][j] = true
    end
    if j >= p[i] && exist[i-1][j - p[i]]
      exist[i][j] = true
    end
  end
end
ans = 0
exist[n].each do |i|
  ans += 1 if i
end
puts(ans)
