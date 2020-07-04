N,R = gets.split.map(&:to_i)
S = gets.chomp

last_p = -1
(N-1).downto(0) do |i|
  if S[i] == '.'
    last_p = i
    break
  end
end

if last_p == -1
  puts 0
  exit
end

now_place = 0
ans_time = 0
loop do
  if now_place == [last_p - R + 1, 0].max
    ans_time += 1
    break
  end

  if S[now_place] == '.'
    now_place.upto([now_place + R - 1, N-1].min) do |i|
      S[i] = 'o'
    end
    ans_time += 1
  end

  ans_time += 1
  now_place += 1
end

puts ans_time
