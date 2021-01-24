h,w = gets.split.map(&:to_i)
s = h.times.map{gets.chomp}
ans = 0
h.times do |i|
  w.times do |j|
    ans += 1 if i + 1 < h && s[i][j] == '.' && s[i+1][j] == '.'
    ans += 1 if j + 1 < w && s[i][j] == '.' && s[i][j+1] == '.'
  end
end
puts ans
