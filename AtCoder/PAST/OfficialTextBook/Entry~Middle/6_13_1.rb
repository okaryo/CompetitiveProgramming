q = gets.to_i
queue = []
q.times do
  query = gets.split
  if query.first == '1'
    c = query[1]
    x = query[2].to_i
    queue << [c,x]
  else
    d = query[1].to_i
    cnt = {}
    ('a'..'z').each do |c|
      cnt[c] = 0
    end
    while d > 0 && queue.size > 0
      c,x = queue[0]
      if d >= x
        d -= x
        cnt[c] += x
        queue.shift
      else
        cnt[c] += d
        queue[0][1] -= d
        d = 0
      end
    end
    ans = 0
    cnt.each do |_, v|
      ans += v**2
    end
    puts(ans)
  end
end
