n = gets.to_i
a = gets.split.map(&:to_i)

mod = 10**9 + 7

ans = 1

cnt = [0, 0, 0]
a.each do |ai|
  t = 0
  3.times do |cnt_i|
    if ai == cnt[cnt_i]
      t += 1
    end
  end
  ans *= t
  ans %= mod

  3.times do |cnt_i|
    if ai == cnt[cnt_i]
      cnt[cnt_i] += 1
      break
    end
  end
end

puts ans
