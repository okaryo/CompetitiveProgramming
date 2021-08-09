n = gets.to_i
ans = 0
dfs = lambda do |x, use3, use5, use7|
  return if x > n
  ans += 1 if use3 && use5 && use7
  dfs.call(10*x + 3, true, use5, use7)
  dfs.call(10*x + 5, use3, true, use7)
  dfs.call(10*x + 7, use3, use5, true)
end
dfs.call(0, false, false, false)
puts(ans)
