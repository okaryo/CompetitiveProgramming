N = gets.to_i
A = gets.split.map(&:to_i)

MOD = 10**9 + 7

cnt = {a: 0, b: 0, c: 0}
ans = 1
A.each do |x|
  t_cnt = 0
  cnt.each do |key, _|
    if x == cnt[key]
      t_cnt += 1
    end
  end
  ans *= t_cnt
  ans %= MOD

  cnt.each do |key, _|
    if x == cnt[key]
      cnt[key] += 1
      break
    end
  end
end

puts ans
